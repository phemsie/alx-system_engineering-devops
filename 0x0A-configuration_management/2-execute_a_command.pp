# Using Puppet, create a manifest that kills a process named killmenow.
exec { 'pkill':
  command => 'pkill -x killmenow',
  path    => '/usr/bin/',
  returns => [0, 1],
}
