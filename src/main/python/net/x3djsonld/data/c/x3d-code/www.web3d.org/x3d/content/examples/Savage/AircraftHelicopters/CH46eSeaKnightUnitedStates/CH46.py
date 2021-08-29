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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='CH46.x3d',name='title'),
    meta(content='Simplistic model of a CH-46 helicopter, which is a medium-lift rotary-wing aircraft used for carrying troops.',name='description'),
    meta(content='Capt Allen A. Harper',name='creator'),
    meta(content='2 August 2001',name='created'),
    meta(content='3 September 2015',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/ch-46.htm',name='reference'),
    meta(content='military aircraft CH-46 CH46 rotary wing helicopter',name='subject'),
    meta(content='http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean3.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/CH46eSeaKnightUnitedStates/CH46.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Universal Media background 
    children=[
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_3_back.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_back.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_3_bottom.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_bottom.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_3_front.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_3_left.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_3_right.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"],skyAngle=[0.1,0.15,1.309,1.57079],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["urn:web3d:media:textures/panoramas/ocean_3_top.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"]),
    #  Viewpoint choices 
    Viewpoint(description='CH-46 Front, level',position=(0,0,30)),
    Viewpoint(description='CH-46 Front, angle down',orientation=(1,0,0,-0.78),position=(0,30,30)),
    Viewpoint(description='CH-46 Right wing, level',orientation=(0,1,0,1.57),position=(30,0,0)),
    Viewpoint(description='CH-46 Rear, level',orientation=(0,1,0,3.14),position=(0,0,-30)),
    Viewpoint(description='CH-46 Left wing, level',orientation=(0,1,0,-1.57),position=(-30,0,0)),
    Viewpoint(description='CH-46 Bottom, up',orientation=(1,0,0,1.57),position=(0,-30,0)),
    Viewpoint(description='CH-46 Top, down',orientation=(1,0,0,-1.57),position=(0,30,0)),
    #  Front Set of Blades 
    Transform(DEF='Front_Rotors',rotation=(1,0,0,-1.60),translation=(0,2,-1),
      children=[
      Transform(DEF='Rotor',translation=(0,-6,1.0),
        children=[
        Transform(rotation=(1,0,0,1.57),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.6),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0),shininess=.3)))]),
        Transform(center=(5.0,0,0),rotation=(0,0,1,1.043),translation=(-5.0,0,0),
          children=[
          Shape(
            geometry=Box(size=(8,0.8,0.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))]),
        Transform(translation=(5.0,0,0),
          children=[
          Shape(
            geometry=Box(size=(8,0.8,0.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))]),
        Transform(center=(-5.0,0,0),rotation=(0,0,1,2.086),translation=(5.0,0,0),
          children=[
          Shape(
            geometry=Box(size=(8,0.8,0.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))])]),
      #  Propeller sensor and interpolator 
      TimeSensor(DEF='Clock',loop=True),
      OrientationInterpolator(DEF='RotorPath',key=[0.0,0.50,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,3.14),(0.0,0.0,1.0,6.28)])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='RotorPath'),
    ROUTE(fromField='value_changed',fromNode='RotorPath',toField='set_rotation',toNode='Rotor'),
    #  Rear Set of Blades 
    Transform(DEF='Rear_Rotors',rotation=(1,0,0,-1.50),translation=(0,2.1,-1),
      children=[
      Transform(DEF='Rotor2',translation=(0,6,1.0),
        children=[
        Transform(rotation=(1,0,0,1.57),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.6),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0),shininess=.3)))]),
        Transform(center=(-5,0,0),rotation=(0,0,1,1.043),translation=(5,0,0),
          children=[
          Shape(
            geometry=Box(size=(8,0.8,0.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))]),
        Transform(translation=(-5,0,0),
          children=[
          Shape(
            geometry=Box(size=(8,0.8,0.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))]),
        Transform(center=(5,0,0),rotation=(0,0,1,2.086),translation=(-5,0,0),
          children=[
          Shape(
            geometry=Box(size=(8,0.8,0.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))])]),
      #  Propeller sensor and interpolator 
      TimeSensor(DEF='Clock2',loop=True),
      OrientationInterpolator(DEF='RotorPath2',key=[0.0,0.50,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,-3.14),(0.0,0.0,1.0,-6.28)])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock2',toField='set_fraction',toNode='RotorPath2'),
    ROUTE(fromField='value_changed',fromNode='RotorPath2',toField='set_rotation',toNode='Rotor2'),
    #  Body of Aircraft 
    Group(
      children=[
      Transform(rotation=(-1,0,0,1.57),translation=(0,0,-0.6),
        #  Plane Main Body 
        children=[
        Shape(
          geometry=Cylinder(height=13,radius=2),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),shininess=.5),
            texture=ImageTexture(DEF='camo-wood2',url=["camo-wood2.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/CH46eSeaKnightUnitedStates/camo-wood2.jpg"])))]),
      Transform(scale=(2.2,1.4,2.8),translation=(0,-0.65,6.5),
        #  Lower Nose Bubble 
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),shininess=.5),
            texture=ImageTexture(DEF='camo-wood3',url=["camo-wood3.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/CH46eSeaKnightUnitedStates/camo-wood3.jpg"]),
            textureTransform=TextureTransform(),))]),
      Transform(scale=(2.2,2,3),translation=(0,0.5,5.0),
        #  Upper Nose Bubble 
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),shininess=.5),
            texture=ImageTexture(DEF='camo-wood4',url=["camo-wood4.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/CH46eSeaKnightUnitedStates/camo-wood4.jpg"])))]),
      Transform(rotation=(1,0,0,0.4),scale=(2.2,2.5,4),translation=(0,0.45,-6.7),
        #  Rear Upper Bubble (Cowling) 
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),shininess=.5),
            texture=ImageTexture(USE='camo-wood2')))]),
      Transform(rotation=(0,0,1,1.57),scale=(0.5,1.5,2),translation=(0,-0.8,-3.5),
        #  Stabilizer Wing 
        children=[
        Shape(
          geometry=Cylinder(height=5),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),shininess=.5),
            texture=ImageTexture(USE='camo-wood2')))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(2,0,0.7),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(2,0,-0.7),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(2,0,-3),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(2,0,3),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(-2,0,0.7),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(-2,0,-0.7),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(-2,0,-3),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(rotation=(0,0,1,1.57),scale=(1,0.2,1),translation=(-2,0,3),
        #  Side Bubble window 
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      #  Model of wheel 
      Transform(rotation=(1,0,0,1.57),translation=(0,-1.01,0),
        children=[
        Transform(DEF='BigWheel',
          children=[
          Transform(rotation=(0,0,1,1.57),scale=(0.15,0.15,0.15),
            children=[
            Shape(
              geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.1,0.1))))]),
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              geometry=Cylinder(height=.2,radius=.15),
              appearance=Appearance(
                material=Material(diffuseColor=(.8,.8,.8))))])])]),
      #  Front Wheel and axle 
      Transform(DEF='BackWheel',center=(0,1,0),translation=(0,-2,5),
        children=[
        Shape(
          geometry=Cylinder(radius=.07),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,.9,.9)))),
        Transform(translation=(0,-1.01,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              geometry=Cylinder(height=.5,radius=.07),
              appearance=Appearance(
                material=Material(diffuseColor=(.8,.8,.8))))])]),
        Transform(rotation=(1,0,0,1.57),translation=(.25,-1.01,0),
          children=[
          Transform(USE='BigWheel')]),
        Transform(rotation=(1,0,0,1.57),translation=(-.25,-1.01,0),
          children=[
          Transform(USE='BigWheel')])]),
      #  Rear Left Wheel and axle 
      Transform(DEF='RearLeftWheel',center=(0,1,0),translation=(3,-1.5,-4),
        children=[
        Shape(
          geometry=Cylinder(radius=.07),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,.9,.9)))),
        Transform(translation=(0,-1.01,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              geometry=Cylinder(height=.5,radius=.07),
              appearance=Appearance(
                material=Material(diffuseColor=(.8,.8,.8))))])]),
        Transform(rotation=(1,0,0,1.57),translation=(.25,-1.01,0),
          children=[
          Transform(USE='BigWheel')]),
        Transform(rotation=(1,0,0,1.57),translation=(-.25,-1.01,0),
          children=[
          Transform(USE='BigWheel')])]),
      #  Rear Right Wheel and axle 
      Transform(DEF='RearRightWheel',center=(0,1,0),translation=(-3,-1.5,-4),
        children=[
        Shape(
          geometry=Cylinder(radius=.07),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,.9,.9)))),
        Transform(translation=(0,-1.01,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              geometry=Cylinder(height=.5,radius=.07),
              appearance=Appearance(
                material=Material(diffuseColor=(.8,.8,.8))))])]),
        Transform(rotation=(1,0,0,1.57),translation=(.25,-1.01,0),
          children=[
          Transform(USE='BigWheel')]),
        Transform(rotation=(1,0,0,1.57),translation=(-.25,-1.01,0),
          children=[
          Transform(USE='BigWheel')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CH46.py")
