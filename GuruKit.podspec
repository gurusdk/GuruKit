#
# Be sure to run `pod lib lint GuruKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GuruKit'
  s.version          = '0.2.2'
  s.summary          = 'GuruKit'
  s.description      = <<-DESC
Guru SDK
                       DESC
  s.homepage         = 'https://github.com/gurusdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Guru' => 'wumy0726@gmail.com' }
  s.source           = { :git => 'https://github.com/gurusdk/GuruKit.git', :tag => s.version.to_s }
  s.ios.deployment_target = '12.0'
  s.swift_version = '5.0'
  s.vendored_frameworks = ['GuruKit.xcframework', 'GuruShared.xcframework']
end
