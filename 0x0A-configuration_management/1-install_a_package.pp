# install puppet-lint -v 2.1.1
package { 'puppet-lint':
  ensure   => '2.1.1',
  provider => gem;
}
