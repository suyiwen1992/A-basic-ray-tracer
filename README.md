# A-basic-ray-tracer
Implement the following ray tracer test.
00.txt
pixel trace
Bare minimum to getting started: flat shading, sphere intersections, casting rays.

01.txt
Get the coordinate system oriented correctly, introduce colors.

02.txt
Test image size and camera settings.

03.txt
Test irregular camera orientation.

04.txt
Get basic plane intersections working.

05.txt
Add Phong shading (diffuse only) and handle point lights.

06.txt
Phong shading with sphere - diffuse only.

07.txt
Phong shading colored material and colored light. Diffuse only.

08.txt
Add specular.

09.txt
Both diffuse and specular.

10.txt
Move light off center; break symmetry.

11.txt
Colors with lights, diffuse, and specular.

12.txt
Phong shading with full scene.

13.txt
Add color to the lights; make sure things work with two lights.

14.txt
Add background shader, introduce ambient light.

15.txt
Shading test.

16.txt
Specular shading test - test exponent.

17.txt
Specular shading test - test exponent.

18.txt
Specular shading test - test exponent.

19.txt
Specular shading test - test exponent.

20.txt
Introduce basic shadows. This is also a bug test; there is a very bright light hidden under the ground.

21.txt
Bug test: objects behind the light.

22.txt
Bug test: object covering up the light. Since no light escapes, the image should only contain ambient light.

23.txt
Test recursion depth.

24.txt
Test recursion depth.

25.txt
Test recursion depth.

26.txt
Start implementing refractive shader: Reflection only test.
Cast a reflective ray in refractive shader (almost same with the reflective shader).

27.txt
Refraction only test. Compute and cast the refracted ray.
You do not have to consider computing the reflectance ratio yet.

28.txt
Blending reflection and refraction components. Update/compute the reflectance ratio.

29.txt
Testing with different refraction indices.

30.txt
The transition of reflection to refraction is tested with a striped pattern.
The scene with the middle plane rendered with different shaders is available here

31.txt
Testing interaction of refractive_shader and reflective_shader with high recursion depth.

32.txt
Final test: A number of objects with various shaders are thrown in a room.

33.txt
Start implementing Booleans: basic union.

34.txt
Start implementing Booleans: basic intersection.

35.txt
Start implementing Booleans: basic difference. Check to make sure that complex objects can cast shadows on themselves.

36.txt
Handle nesting of Booleans.

37.txt
Bug test: check complex interaction of Booleans.

38.txt
Bug test: check complex interaction of Booleans.

39.txt
Bug test: check complex interaction of Booleans.

40.txt
Bug test: check complex interaction of Booleans.

41.txt
Bug test: check complex interaction of Booleans.

42.txt
Construct a bounded object from unbounded primitives.

43.txt
Complex Booleans and self-shadowing.

44.txt
Bug test: what happens if we construct a hollow piece of geometry and fill it with a camera, lights, and objects?
