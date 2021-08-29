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
    meta(content='Swing.x3d',name='title'),
    meta(content='This file draw the swing in the playground with animation.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/Swing.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Group(
        children=[
        Transform(center=(0,1,0),rotation=(1,0,0,0.5),translation=(-2,0,0),
          children=[
          Shape(DEF='SWINGVBarGP',
            geometry=Cylinder(radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.7,0.3),emissiveColor=(0.1,0.7,0.3),shininess=0.7,specularColor=(0.5,0.5,0.5)),
              texture=ImageTexture(url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/wood.jpg"])))]),
        Transform(center=(0,1,0),rotation=(1,0,0,-0.5),translation=(-2,0,0),
          children=[
          Shape(USE='SWINGVBarGP')]),
        Transform(center=(0,1,0),rotation=(1,0,0,0.5),translation=(2,0,0),
          children=[
          Shape(USE='SWINGVBarGP')]),
        Transform(center=(0,1,0),rotation=(1,0,0,-0.5),translation=(2,0,0),
          children=[
          Shape(USE='SWINGVBarGP')]),
        Transform(rotation=(0,0,1,1.57),translation=(0,1,0),
          children=[
          Shape(DEF='SWINGCBarSH',
            geometry=Cylinder(height=4.2,radius=0.1),
            appearance=Appearance(
              material=Material(),))]),
        Transform(translation=(-1,0.85,0),
          children=[
          Group(DEF='LOOPGP',
            children=[
            Transform(rotation=(0,0,1,1.57),scale=(0.03,0.03,0.03),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,1))),
                geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]))])])]),
        Transform(translation=(-0.5,0.85,0),
          children=[
          Group(USE='LOOPGP')]),
        Transform(translation=(0.5,0.85,0),
          children=[
          Group(USE='LOOPGP')]),
        Transform(translation=(1,0.85,0),
          children=[
          Group(USE='LOOPGP')]),
        TouchSensor(DEF='SWINGSensor'),
        Transform(),]),
      Transform(
        children=[
        Group(
          children=[
          Transform(
            children=[
            Transform(DEF='SWINGSEAT1TX',center=(0,0.85,0),rotation=(1,0,0,0.0001),
              children=[
              Group(DEF='SWINGSEAT1GP',
                children=[
                Group(
                  children=[
                  Transform(scale=(0.5,0.5,0.5),translation=(-1,0.8,0),
                    children=[
                    Group(DEF='ROPELeft',
                      children=[
                      Transform(rotation=(1,0,0,1.57),scale=(0.05,0.05,0.05),
                        children=[
                        Shape(DEF='SWINRING',
                          appearance=Appearance(DEF='ROPEApp',
                            material=Material(diffuseColor=(1,1,1))),
                          geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]))]),
                      Transform(scale=(0.05,0.05,0.05),translation=(0,-1.475,0),
                        children=[
                        Shape(
                          appearance=Appearance(USE='ROPEApp'),
                          geometry=Cylinder(height=55))])]),
                    Transform(translation=(1,0,0),
                      children=[
                      Group(USE='ROPELeft')]),
                    Transform(translation=(0.5,-2.85,0),
                      children=[
                      Shape(
                        geometry=Box(size=(1.15,0.08,0.3)),
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.95,0.1,0.1),emissiveColor=(0.05,0.05,0.05))))]),
                    TouchSensor(DEF='SWINGSEAT1Sensor'),
                    TimeSensor(DEF='SWINGSEAT1Timer',cycleInterval=40),
                    OrientationInterpolator(DEF='SWINGSEAT1Inter',key=[0,0.025,0.075,0.125,0.175,0.225,0.275,0.325,0.375,0.425,0.475,0.525,0.575,0.625,0.675,0.725,0.775,0.825,0.875,0.925,0.975,1.0],keyValue=[(1,0,0,0),(1,0,0,0.785),(1,0,0,-1.2),(1,0,0,1.2),(1,0,0,-1.3),(1,0,0,1.3),(1,0,0,-1.35),(1,0,0,1.35),(1,0,0,-1.2),(1,0,0,1.2),(1,0,0,-1.25),(1,0,0,0.785),(1,0,0,-1.2),(1,0,0,1.2),(1,0,0,-1.3),(1,0,0,1.3),(1,0,0,-1.35),(1,0,0,1.35),(1,0,0,-1.2),(1,0,0,1.2),(1,0,0,-1.25),(1,0,0,0)])])])])])]),
          Transform(DEF='SWINGSEAT2TX',center=(0,0.85,0),
            children=[
            Group(DEF='SWINGSEAT2GP',
              children=[
              Group(
                children=[
                Transform(scale=(0.5,0.5,0.5),translation=(-1,0.8,0),
                  children=[
                  Transform(translation=(3,0,0),
                    children=[
                    Group(DEF='ROPELeft2',
                      children=[
                      Transform(rotation=(1,0,0,1.57),scale=(0.05,0.05,0.05),
                        children=[
                        Shape(USE='SWINRING')]),
                      Transform(scale=(0.05,0.05,0.05),translation=(0,-1.37,0),
                        children=[
                        Shape(
                          appearance=Appearance(USE='ROPEApp'),
                          geometry=Cylinder(height=50))])]),
                    Transform(translation=(1,0,0),
                      children=[
                      Group(USE='ROPELeft2')]),
                    Transform(translation=(0.5,-2.6,0),
                      children=[
                      Shape(
                        geometry=Box(size=(1.15,0.08,0.3)),
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.1,0.1,0.95),emissiveColor=(0.05,0.05,0.1))))]),
                    TouchSensor(DEF='SWINGSEAT2Sensor'),
                    TimeSensor(DEF='SWINGSEAT2Timer',cycleInterval=35),
                    OrientationInterpolator(DEF='SWINGSEAT2Inter',key=[0,0.025,0.075,0.125,0.175,0.225,0.275,0.325,0.375,0.425,0.475,0.525,0.575,0.625,0.675,0.725,0.775,0.825,0.875,0.925,0.975,1.0],keyValue=[(1,0,0,0),(1,0,0,0.785),(1,0,0,-1.25),(1,0,0,1.3),(1,0,0,-1.3),(1,0,0,1.35),(1,0,0,-1.35),(1,0,0,1.25),(1,0,0,-1.25),(1,0,0,1.2),(1,0,0,-1.2),(1,0,0,0.785),(1,0,0,-1.25),(1,0,0,1.3),(1,0,0,-1.3),(1,0,0,1.35),(1,0,0,-1.35),(1,0,0,1.25),(1,0,0,-1.25),(1,0,0,1.2),(1,0,0,-1.2),(1,0,0,0)])])])])])])])]),
      Transform(),
      ROUTE(fromField='touchTime',fromNode='SWINGSensor',toField='set_startTime',toNode='SWINGSEAT1Timer'),
      ROUTE(fromField='touchTime',fromNode='SWINGSensor',toField='set_startTime',toNode='SWINGSEAT2Timer'),
      ROUTE(fromField='touchTime',fromNode='SWINGSEAT1Sensor',toField='set_startTime',toNode='SWINGSEAT1Timer'),
      ROUTE(fromField='fraction_changed',fromNode='SWINGSEAT1Timer',toField='set_fraction',toNode='SWINGSEAT1Inter'),
      ROUTE(fromField='value_changed',fromNode='SWINGSEAT1Inter',toField='set_rotation',toNode='SWINGSEAT1TX'),
      ROUTE(fromField='touchTime',fromNode='SWINGSEAT2Sensor',toField='set_startTime',toNode='SWINGSEAT2Timer'),
      ROUTE(fromField='fraction_changed',fromNode='SWINGSEAT2Timer',toField='set_fraction',toNode='SWINGSEAT2Inter'),
      ROUTE(fromField='value_changed',fromNode='SWINGSEAT2Inter',toField='set_rotation',toNode='SWINGSEAT2TX')]),
    Transform(
      children=[
      Group(
        children=[
        Transform(),
        Transform(),])]),
    Transform(
      children=[
      Group(),]),
    Viewpoint(description='Swing',position=(0,0.65,6.5))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Swing.py")
