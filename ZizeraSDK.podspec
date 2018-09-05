Pod::Spec.new do |s|
  s.name             = 'ZizeraSDK'
  s.version          = '1.0.0'
  s.summary          = 'Provide description about ZizeraSDK'
  s.swift_version    = '3.2'
  s.homepage         = 'https://zizera.com/'
  # s.license          = 'ZIZERA'
  s.license          = { :type => "ZIZERA", :text => "All Rights Reserve to zizera.com"}
  s.author           = { 'Lokesh' => 'lokesh@zizera.com' }
  s.source           = { :git => 'https://github.com/lokeshvunnam1989/TestPodSpec.git', :tag => "v#{s.version}" }
  # s.source           = { :http => 'https://development.zizera.in/zlite/assets/zizera/repository/zizera-ios-app-binary/podframework.zip' }
  s.ios.deployment_target = '9.0'
  # s.source_files = 'ZizeraSDK/Controller/*.swift'
  s.vendored_frameworks = 'Binary/ZizeraSDK.framework'
  s.static_framework = true
  # s.requires_arc = true
  s.dependency 'SQLite.swift'
  s.dependency 'Alamofire'
  s.dependency 'Zip','~> 0.7'
  s.dependency 'SwiftyJSON','~> 3.1.4'
  s.dependency 'ReachabilitySwift'
end