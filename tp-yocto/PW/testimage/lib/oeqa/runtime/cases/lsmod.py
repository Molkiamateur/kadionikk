#
# SPDX-License-Identifier: MIT
#

from oeqa.runtime.case import OERuntimeTestCase
from oeqa.core.decorator.depends import OETestDepends
from oeqa.runtime.decorator.package import OEHasPackage

class LsmodTest(OERuntimeTestCase):

    @OEHasPackage(['coreutils', 'busybox'])
    def test_lsmod(self):
        (status,output) = self.target.run('lsmod | grep hello')
        msg = 'kernel module hello not loaded !'
        self.assertEqual(status, 0, msg=msg)
