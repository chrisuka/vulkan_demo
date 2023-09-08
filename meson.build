project ('vulkan triangle', 'cpp')

src = files ([
  'src/main.cpp'
])

deps = [
  dependency ('glfw3')
  , dependency ('vulkan')
]

executable ('vkapp',
  sources : src
  , dependencies: deps)
