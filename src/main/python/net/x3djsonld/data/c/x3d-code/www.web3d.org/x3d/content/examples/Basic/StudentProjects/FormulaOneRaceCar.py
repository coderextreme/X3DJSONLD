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
    meta(content='FormulaOneRaceCar.x3d',name='title'),
    meta(content='A FormulaOne Race Car running in a predefined path',name='description'),
    meta(content='Athanasopoulos,Vasileios',name='creator'),
    meta(content='2 August 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Missing files: nplogo.jpg (npslogo.jpg?) front.jpg f1.wav f2.wav f3.wav',name='warning'),
    meta(content='Formula One Race Car',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FormulaOneRaceCar.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Formula One Race Car',orientation=(-1,1,1,1),position=(6,8,8)),
    DirectionalLight(direction=(5,0,0)),
    Viewpoint(description='Bottom',orientation=(1,0,0,1.57),position=(0,-25,-8)),
    Background(groundColor=[(0,0,0)],skyColor=[(0,0,1)]),
    Transform(DEF='CAR',rotation=(0,1,0,-1.57),
      children=[
      Group(DEF='ViewpointGroup',
        children=[
        Group(
          children=[
          Viewpoint(description='Front',orientation=(0,1,0,1.57),position=(10,2,0)),
          Viewpoint(description='Right',position=(0,2,10)),
          Viewpoint(description='Left',orientation=(0,1,0,3.14),position=(0,1.5,-14)),
          Viewpoint(description='Back',orientation=(0,1,0,-1.57),position=(-10,0.85,0)),
          Viewpoint(description='Top',orientation=(1,0,0,-1.57),position=(0,15,0.5))]),
        WorldInfo(info=["null node"])]),
      Group(
        children=[
        Transform(DEF='FORMULA',
          children=[
          Transform(rotation=(1,0,0,-1.57),
            #  "BACK WHEELS & AXIS" 
            children=[
            Group(
              children=[
              Transform(rotation=(1,0,0,1.57),translation=(0,-2.8,0),
                children=[
                Group(
                  children=[
                  Transform(DEF='BACK',
                    children=[
                    Transform(DEF='wheel1',rotation=(0,0,1,1.57),translation=(1.5,0,0),
                      #  "OUTER WHEEL CYLINDER" 
                      children=[
                      Shape(DEF='elastic',
                        appearance=Appearance(
                          material=Material(diffuseColor=(0,0,0))),
                        geometry=Cylinder(height=0.92,radius=0.65)),
                      #  "INNER WHEEL CYLINDER" 
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(.5,.5,.5))),
                        geometry=Cylinder(height=.92,radius=.45))]),
                    Transform(translation=(1.912,0,0),
                      children=[
                      Shape(DEF='rad',
                        appearance=Appearance(
                          material=Material(),),
                        geometry=Box(size=(0.1,0.90,0.05)))]),
                    Transform(rotation=(1,0,0,1.57),translation=(1.912,0,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(),),
                        geometry=Box(size=(0.1,0.90,0.05)))]),
                    Transform(DEF='wheel2',rotation=(0,0,1,1.57),translation=(-1.5,0,0),
                      #  "OUTER WHEEL CYLINDER" 
                      children=[
                      Shape(USE='elastic'),
                      #  "INNER WHEEL CYLINDER" 
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(.5,.5,.5))),
                        geometry=Cylinder(height=.92,radius=.45))]),
                    Transform(translation=(-1.912,0,0),
                      children=[
                      Shape(USE='rad')]),
                    Transform(rotation=(1,0,0,1.57),translation=(-1.912,0,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(),),
                        geometry=Box(size=(0.1,0.90,0.05)))]),
                    Transform(DEF='axis1',rotation=(0,0,1,1.57),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(0,0,0))),
                        geometry=Cylinder(height=3.96,radius=.12))])]),
                  TimeSensor(DEF='CLOCK1',cycleInterval=2,loop=True),
                  OrientationInterpolator(DEF='POS1',key=[0,0.5,1],keyValue=[(1,0,0,0),(1,0,0,-3.14),(1,0,0,-6.28)])]),
                ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='POS1'),
                ROUTE(fromField='value_changed',fromNode='POS1',toField='set_rotation',toNode='BACK')])]),
            #  "FRONT WHEELS & AXIS" 
            Group(
              children=[
              Transform(rotation=(1,0,0,1.57),translation=(0,2.65,0),
                children=[
                Group(
                  children=[
                  Transform(DEF='FRONT',
                    children=[
                    Transform(DEF='wheel3',rotation=(0,0,1,1.57),translation=(1.5,0,0),
                      #  "OUTER WHEEL CYLINDER" 
                      children=[
                      Shape(DEF='elastic1',
                        appearance=Appearance(
                          material=Material(diffuseColor=(0,0,0))),
                        geometry=Cylinder(height=0.92,radius=0.65)),
                      #  "INNER WHEEL CYLINDER" 
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(.5,.5,.5))),
                        geometry=Cylinder(height=.92,radius=.45))]),
                    Transform(translation=(1.912,0,0),
                      children=[
                      Shape(USE='rad')]),
                    Transform(rotation=(1,0,0,1.57),translation=(1.912,0,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(),),
                        geometry=Box(size=(0.1,.90,.05)))]),
                    Transform(DEF='wheel4',rotation=(0,0,1,1.57),translation=(-1.5,0,0),
                      #  "OUTER WHEEL CYLINDER" 
                      children=[
                      Shape(USE='elastic'),
                      #  "INNER WHEEL CYLINDER" 
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(.5,.5,.5))),
                        geometry=Cylinder(height=.92,radius=.45))]),
                    Transform(translation=(-1.912,0,0),
                      children=[
                      Shape(USE='rad')]),
                    Transform(rotation=(1,0,0,1.57),translation=(-1.912,0,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(),),
                        geometry=Box(size=(0.1,.90,.05)))]),
                    Transform(DEF='axis2',rotation=(0,0,1,1.57),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(0,0,0))),
                        geometry=Cylinder(height=3.96,radius=.12))])]),
                  TimeSensor(DEF='CLOCK2',cycleInterval=2,loop=True),
                  OrientationInterpolator(DEF='POS2',key=[0,0.5,1],keyValue=[(1,0,0,0),(1,0,0,-3.14),(1,0,0,-6.28)]),
                  ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='POS2'),
                  ROUTE(fromField='value_changed',fromNode='POS2',toField='set_rotation',toNode='FRONT')])])]),
            #  "CAR BODY" 
            Group(
              #  "CAR BODY" 
              children=[
              Transform(scale=(1,4,0.5),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0,0))),
                  geometry=Sphere(),),
                Transform(rotation=(1,0,0,0),translation=(0,0.2,0.976),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,1,0),transparency=.5),
                      texture=ImageTexture(DEF='nplogo',url=["nplogo.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/nplogo.jpg"])),
                    geometry=Box(size=(0.7,.2,.0000001)))])]),
              Group(),
              #  "PILOT'S COVER SHELL" 
              Transform(DEF='COVER',center=(0,0,0.535),scale=(.5,0.9,0.3),translation=(0,-1,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(transparency=0.55)),
                  geometry=Sphere(radius=1.3)),
                CylinderSensor(DEF='COVERSENS',description='touch to activate',diskAngle=0.262,maxAngle=3.57)]),
              ROUTE(fromField='rotation_changed',fromNode='COVERSENS',toField='set_rotation',toNode='COVER'),
              #  "PILOT'S HEAD" 
              Transform(translation=(0,-1.3,0.5),
                children=[
                Viewpoint(description='Driver',orientation=(1,0,0,1.350),position=(0,0.25,-0.015)),
                Transform(rotation=(1,0,0,1.67),translation=(0,0.7,-0.2),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,0,0),transparency=.5),
                      texture=ImageTexture(url=["front.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/front.jpg"])),
                    geometry=Box(size=(0.9,0.8,0.01)))]),
                Transform(rotation=(1,0,0,1.67),translation=(0,0.701,-0.2),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,0,0))),
                    geometry=Box(size=(0.9,0.8,0.01)))]),
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0,0))),
                  geometry=Sphere(radius=0.25))]),
              #  "FRONT-HORIZONTAL PANEL-TEXTURES " 
              Transform(translation=(0,3.80,-0.3),
                #  "FRONT (HORIZONTAL) PANEL" 
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0,0))),
                  geometry=Box(size=(3.94,.6,.03))),
                #  "FRONT-RIGHT (OUTER)VERTICAL PANEL" 
                Transform(translation=(0.35,-0.2,0.15),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,1,0))),
                    geometry=Box(size=(.03,0.16,0.28)))]),
                #  "FRONT-LEFT (OUTER)VERTICAL PANEL 
                Transform(translation=(-0.35,-0.2,0.15),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,1,0))),
                    geometry=Box(size=(.03,0.16,0.28)))]),
                #  "BACK TEXT" 
                Transform(rotation=(0,0,1,-3.14),translation=(1.40,-7.20,1.05),
                  children=[
                  Transform(rotation=(1,0,0,0.266),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,0))),
                      geometry=Text(string=["MV-4204"],
                        fontStyle=FontStyle(size=.8,style_='BOLD')))])]),
                #  "FRONT RIGHT TEXT" 
                Transform(rotation=(0,0,1,-3.14),translation=(2.2,0.2,0),
                  children=[
                  Transform(translation=(.5,.020,0.05),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,0))),
                      geometry=Text(string=["VRML"],
                        fontStyle=FontStyle(size=.4,style_='BOLD')))])]),
                #  "FRONT LEFT TEXT" 
                Transform(rotation=(0,0,1,3.14),translation=(-2.1,0.2,0),
                  children=[
                  Transform(translation=(-1.5,0.01,0.05),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,0))),
                      geometry=Text(string=["VRML"],
                        fontStyle=FontStyle(size=.4,style_='BOLD')))])]),
                #  "FRONT-RIGHT (INNER)VERTICAL PANEL 
                Transform(translation=(1.95,0.01,0.05),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,1,0))),
                    geometry=Box(size=(0.03,.6,.1)))]),
                #  "FRONT-LEFT (INNER)VERTICAL PANEL 
                Transform(translation=(-1.95,0.01,0.05),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,1,0))),
                    geometry=Box(size=(0.03,.6,.1)))])]),
              #  "BACK (INCLINED) UPPER PANEL" 
              Transform(rotation=(1,0,0,-0.2),translation=(0,-3.57,0.75),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0,0))),
                  geometry=Box(size=(3.94,0.8,0.04))),
                Transform(translation=(1.95,0,0.1),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,1,0))),
                    geometry=Box(size=(0.04,0.8,0.2)))]),
                Transform(translation=(-1.95,0,0.1),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.2,1,0))),
                    geometry=Box(size=(0.04,0.8,0.2)))])]),
              #  "HORIZONTAL PART OF THE CAR" 
              Transform(rotation=(0,0,1,1.57),scale=(1,1,0.05),translation=(0,-0.15,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.2,1,0)),
                    texture=ImageTexture(USE='nplogo')),
                  geometry=Cylinder(height=3.95,radius=1.9)),
                #  "RIGHT TEXT" 
                Transform(rotation=(0,0,1,-3.14),translation=(0.6,1.65,2),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,1,0))),
                    geometry=Text(string=["NPS"],
                      fontStyle=FontStyle(size=.8,style_='BOLD')))]),
                #  "LEFT TEXT" 
                Transform(rotation=(0,0,1,-6.28),translation=(-0.8,-1.65,2),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,1,0))),
                    geometry=Text(string=["NPS"],
                      fontStyle=FontStyle(size=.8,style_='BOLD')))])]),
              #  "BACK-LEFT VERTICAL PANEL" 
              Transform(translation=(-0.42,-3.4,0.35),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.2,1,0))),
                  geometry=Box(size=(.06,0.26,0.7)))]),
              #  "BACK-RIGHT VERTICAL PANEL" 
              Transform(translation=(0.42,-3.4,0.35),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.2,1,0))),
                  geometry=Box(size=(.06,0.26,0.7)))]),
              #  "EXHAUST" 
              Transform(translation=(0.2,-3.88,0),
                children=[
                Shape(DEF='exhaust',
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=.25,radius=.05))]),
              #  "EXHAUST" 
              Transform(translation=(-0.2,-3.88,0),
                children=[
                Shape(USE='exhaust')])])]),
          Sound(DEF='Engine1',
            source=AudioClip(DEF='SOUNDSOURCE1',description='V1',loop=True,url=["f1.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/f1.wav"])),
          Sound(DEF='Engine2',
            source=AudioClip(DEF='SOUNDSOURCE2',description='V2',loop=True,url=["f2.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/f2.wav"])),
          Sound(DEF='Engine3',
            source=AudioClip(DEF='SOUNDSOURCE3',description='V3',loop=True,url=["f3.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/f3.wav"]))]),
        Script(DEF='MOVE',
          field=[
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
          field(accessType='initializeOnly',name='radius',type='SFFloat',value=10),
          field(accessType='initializeOnly',name='turns',type='SFFloat',value=1)]),
        Script(DEF='TURN',
          field=[
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='outputOnly',name='value_changed',type='SFRotation'),
          field(accessType='initializeOnly',name='radius',type='SFFloat',value=1),
          field(accessType='initializeOnly',name='turns',type='SFFloat',value=1)]),
        PlaneSensor(DEF='DRAG',description='touch to activate'),
        TimeSensor(DEF='CLOCK',cycleInterval=8.0,loop=True)]),
      ROUTE(fromField='translation_changed',fromNode='DRAG',toField='set_translation',toNode='CAR'),
      ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='MOVE'),
      ROUTE(fromField='value_changed',fromNode='MOVE',toField='set_translation',toNode='CAR'),
      ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='TURN'),
      ROUTE(fromField='value_changed',fromNode='TURN',toField='set_rotation',toNode='FORMULA')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FormulaOneRaceCar.py")
