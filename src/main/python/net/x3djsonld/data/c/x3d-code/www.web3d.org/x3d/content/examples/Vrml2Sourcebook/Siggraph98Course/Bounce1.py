###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='Bounce1.x3d',name='title'),
    meta(content='Bouncing beachball (JavaScript/VRMLscript version): this world illustrates the use of a Script node to create a computed animation path. In particular, the Script node uses a JavaScript (or VRMLScript) program script to compute translation values for a vertically bouncing beach ball.',name='description'),
    meta(content='David R. Nadeau',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 July 1998',name='created'),
    meta(content='2 February 2014',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/bounce1.wrl',name='reference'),
    meta(content='http://www.siggraph.org/s98',name='reference'),
    meta(content='http://www.siggraph.org/s98/conference/courses/18.html',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0407.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0426.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/vrml97.htm',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/Bounce1.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/bounce1.htm 
    #  This world illustrates the use of a Script node to create a computed animation path. In particular, the Script node uses a JavaScript (or VRMLScript) program script to compute translation values for a vertically bouncing beach ball. 
    #  The bounce path is based upon the projectile motion equation of physics, constrained to create a cyclic bouncing path with a user-selected maximum bounce height. Also, there is no friction, drag, or damping. 
    #  The equation is derived as follows: 
    #  (1) Projectile motion computes a y(t) value (height as a function of time) based upon the gravitation constant, g, an initial y-direction velocity, v0, an initial y position, y0, and the current time, t: 
    #  y(t) = 0.5 * g * t * t + v0 * t + y0 
    #  (2) At time t=0, the ball should be on the ground with y=0. So, y0 = y(0) = 0. The equation in (1) simplifies to: 
    #  y(t) = 0.5 * g * t * t + v0 * t 
    #  (3) At time t=1, at the end of the TimeSensor's fractional time cycle, the ball should again be on the ground with y=0. So, y(1) = 0. Plugging this in to the equation in (2), we get: 
    #  y(t) = 0.5 * g * t * t + v0 * t 
    #  y(1) = 0.5 * g * 1 * 1 + v0 * 1 
    #  0 = 0.5 * g + v0 
    #  So v0 = -0.5 * g 
    #  (4) At time t=0.5, the ball should be at the peak of its bounce at a user-selected maximum height, h. So, y(0.5) = h. Plugging this in to the equation in (2), we get: 
    #  y(t) = 0.5 * g * t * t + v0 * t 
    #  y(0.5) = 0.5 * g * 0.5 * 0.5 + v0 * 0.5 
    #  h = g * 0.125 + v0 * 0.5 
    #  And v0 = -0.5 * g from equation (3), so 
    #  h = g * 0.125 - 0.5 * g * 0.5 
    #  h = -g * 0.125 
    #  So g = -8.0 * h 
    #  (5) We can now simplify the equation in (2) using the results from (3) and (4) to get an equation that computes the ball height y(t) parameterized only by the maximum height, h, giving us: 
    #  y(t) = 0.5 * g * t * t + v0 * t 
    #  y(t) = 0.5 * (-8.0 * h) * t * t + (-0.5 * g) * t 
    #  y(t) = 0.5 * (-8.0 * h) * t * t + (4.0 * h) * t 
    #  y(t) = 4.0 * h * (-t * t + t) 
    #  y(t) = 4.0 * h * t * (1.0 - t) 
    #  In the program script, the maximum height, h, is given in the 'bounceHeight' field. The current time, t, is given in the 'set_fraction' eventIn and passed to the eventIn function as the 'frac' parameter. Using these names, the above equation becomes: 
    #  y = 4.0 * bounceHeight * frac * (1.0 - frac) 
    #  Things to experiment with 
    #  - Encapsulate the ball, script, timer, and sensors within a PROTO for a new node named "BouncingBall". Then use that new BouncingBall node multiple times to create multiple bouncing balls. Your PROTO interface might look like this: 
    #  PROTO BouncingBall [ field SFFloat bounceHeight 2.0 field SFTime cycleInterval 2.0 ] { . . . } 
    #  See 'bounce3.wrl', which implements such a PROTO. 
    #  - Add a shadow under the bouncing ball. To do this, add a circular, semi-transparent, black shape that doesn't bounce. To make the shadow more realistic, scale the shadow in the X and Z directions, shrinking it as the ball goes up, and increasing it as the ball comes down. You'll need to add another eventOut for the Script node and send an XYZ scaling factor triple out that eventOut. Try the following values for the XYZ scale values: 
    #  xzscale = 1.0 - 0.5 * y / bounceHeight; 
    #  shadowScale_changed[0] = xzscale; 
    #  shadowScale_changed[1] = 1.0; 
    #  shadowScale_changed[2] = xzscale; 
    #  See 'bounce4.wrl', which implements shadows using the above scale values. 
    #  - Add a sound to the PROTO so that each time the ball touches the ground, it makes a 'boing' sound. 
    #  - When the ball hits the ground, scale the ball slightly so that it appears to squish. 
    children=[
    WorldInfo(info=["Copyright (c) 1997, David R. Nadeau"],title='Bouncing beachball (JavaScript)'),
    Viewpoint(description='Bouncing beachball, JavaScript version',orientation=(1.0,0.0,0.0,0.1),position=(0.0,0.6,8.0)),
    NavigationInfo(headlight=False,speed=2.0),
    DirectionalLight(ambientIntensity=0.5,direction=(0.0,-1.0,-0.5)),
    Background(skyAngle=[1.371,1.571],skyColor=[(0.0,0.0,1.0),(0.0,0.5,1.0),(0.7,0.7,1.0)]),
    Shape(
      appearance=Appearance(
        textureTransform=TextureTransform(scale=(10.0,10.0)),
        material=Material(),
        texture=ImageTexture(url=["sand.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/sand.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,
        coord=Coordinate(point=[(-50.0,-1.0,50.0),(50.0,-1.0,50.0),(50.0,-1.0,-50.0),(-50.0,-1.0,-50.0)]))),
    Transform(translation=(-3.0,-1.0,-10.0),
      children=[
      Group(DEF='Palm',
        children=[
        Billboard(
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(url=["palm.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/palm.png"])),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
              texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
              coord=Coordinate(point=[(-2.5,0.0,0.0),(2.5,0.0,0.0),(2.5,11.25,0.0),(-2.5,11.25,0.0)])))]),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0,0.0,0.0),transparency=0.5),
            texture=ImageTexture(url=["palmsh.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/palmsh.png"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
            texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
            coord=Coordinate(point=[(-2.5,0.05,2.5),(2.5,0.05,2.5),(2.5,0.05,-2.5),(-2.5,0.05,-2.5)])))])]),
    Transform(scale=(0.6,0.6,0.6),translation=(-5.0,-1.0,-6.0),
      children=[
      Group(USE='Palm')]),
    Transform(translation=(5.0,-1.0,-9.0),
      children=[
      Group(USE='Palm')]),
    Transform(translation=(10.0,-1.0,-15.0),
      children=[
      Group(USE='Palm')]),
    Transform(DEF='Ball',
      children=[
      Shape(
        appearance=Appearance(
          textureTransform=TextureTransform(scale=(2.0,1.0)),
          material=Material(ambientIntensity=0.5,diffuseColor=(1.0,1.0,1.0),shininess=0.4,specularColor=(0.7,0.7,0.7)),
          texture=ImageTexture(url=["beach.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/beach.jpg"])),
        geometry=Sphere(),)]),
    TimeSensor(DEF='Clock',cycleInterval=2.0,loop=True,startTime=1.0),
    Script(DEF='Bouncer',
      field=[
      field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
      field(accessType='initializeOnly',name='bounceHeight',type='SFFloat',value=3.0),
      field(accessType='inputOnly',name='set_fraction',type='SFFloat')]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Bouncer'),
    ROUTE(fromField='value_changed',fromNode='Bouncer',toField='set_translation',toNode='Ball')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bounce1.py")
