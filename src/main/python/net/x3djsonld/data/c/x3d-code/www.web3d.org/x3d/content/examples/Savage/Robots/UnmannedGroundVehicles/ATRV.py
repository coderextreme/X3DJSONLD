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
    meta(content='ATRV.x3d',name='title'),
    meta(content='All Terrain Robot Vehicle (ATRV) is primarily used for research in robotics.',name='description'),
    meta(content='LT Monty Williams',name='creator'),
    meta(content='5 September 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='PneumaticTire.x3d',name='reference'),
    meta(content='atrv_tech_2001.pdf',name='reference'),
    meta(content='http://www.irobot.com/_post/rwi/atrv_tech_2001.pdf',name='reference'),
    meta(content='http://www.irobot.com/rwi/p02.asp',name='reference'),
    meta(content='Mobile wheeled robot',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedGroundVehicles/ATRV.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(
      children=[
      Group(
        children=[
        Transform(DEF='FrontWheelAxle',
          children=[
          Group(DEF='WheelAxle',
            children=[
            Transform(DEF='FrontWheelTransform',scale=(0.3,0.3,0.3),translation=(1.0,0.0,-0.2),
              children=[
              Inline(DEF='TIRE',url=["PneumaticTire.x3d","https://savage.nps.edu/Savage/GroundVehicles/Robots/PneumaticTire.x3d","PneumaticTire.wrl","https://savage.nps.edu/Savage/GroundVehicles/Robots/PneumaticTire.wrl"])]),
            Transform(DEF='RearWheelTransform',scale=(0.3,0.3,0.3),translation=(-1.0,0.0,-0.2),
              children=[
              Inline(USE='TIRE')])])]),
        Transform(translation=(0.0,0.0,-2.6),
          children=[
          Group(USE='WheelAxle')]),
        Transform(
          children=[
          Group(DEF='PlatformBase',
            children=[
            Transform(translation=(0.0,0.2,-1.5),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.8,0.0,0.2))),
                geometry=Box(size=(4.0,1.0,2.0)))]),
            Transform(translation=(2.3,0.2,-1.5),
              children=[
              Group(DEF='Bumper',
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.2,0.2,0.2))),
                  geometry=Box(size=(0.2,0.4,2.0))),
                Transform(rotation=(0,0,1,1.57),scale=(0.2,0.2,0.2),translation=(-0.3,0.0,0.8),
                  children=[
                  Transform(rotation=(1,0,0,3.14),
                    children=[
                    Group(DEF='Harness',
                      children=[
                      Transform(
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.2,0.2,0.2))),
                          geometry=Extrusion(crossSection=[(1.6,0.0),(1.0,1.0),(-1.0,1.0),(-1.0,0.0),(1.6,0.0)],solid=False,spine=[(0.0,0.0,0.5),(0.0,0.0,-0.5)]))]),
                      Transform(rotation=(1,0,0,1.57),translation=(-0.5,0.5,0.0),
                        children=[
                        Shape(DEF='HarnessHole',
                          appearance=Appearance(
                            material=Material(),),
                          geometry=Cylinder(height=1.05,radius=0.3))]),
                      Transform(rotation=(1,0,0,1.57),translation=(0.5,0.5,0.0),
                        children=[
                        Shape(USE='HarnessHole')])])])]),
                Transform(rotation=(0,0,1,1.57),scale=(0.2,0.2,0.2),translation=(-0.3,0.0,-0.8),
                  children=[
                  Transform(rotation=(1,0,0,3.14),
                    children=[
                    Group(USE='Harness')])])])]),
            Transform(rotation=(0,1,0,3.14),translation=(-2.3,0.2,-1.5),
              children=[
              Group(USE='Bumper')])])]),
        Transform(translation=(0.0,0.7,-0.5),
          children=[
          Transform(rotation=(0,0,1,-1.57),
            children=[
            CylinderSensor(DEF='CaseCylinderSensor',description='touch to activate',maxAngle=0.785),
            Transform(DEF='CaseTransform',
              children=[
              Transform(rotation=(0,0,1,1.57),
                children=[
                Group(DEF='CASE',
                  children=[
                  Transform(
                    children=[
                    Shape(
                      appearance=Appearance(DEF='CaseAppearance',
                        material=Material(diffuseColor=(0.8,0.1,0.2))),
                      geometry=Extrusion(beginCap=False,crossSection=[(2.0,0.0),(2.0,-2.0),(-2.0,-2.0),(-2.0,0.0),(2.0,0.0)],endCap=False,solid=False,spine=[(0.0,0.0,0.0),(0.0,0.4,0.0)]))]),
                  Transform(
                    children=[
                    Shape(
                      appearance=Appearance(USE='CaseAppearance'),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,2,1,3,4,-1,1,5,6,3,-1,4,3,6,7,-1,7,6,5,8,-1,8,5,9,-1],solid=False,
                        coord=Coordinate(point=[(2.0,0.4,0.0),(1.0,1.2,-0.3),(1.0,0.4,0.0),(-2.0,1.2,-0.3),(-2.0,0.4,0.0),(1.0,1.2,-1.7),(-2.0,1.2,-1.7),(-2.0,0.4,-2.0),(1.0,0.4,-2.0),(2.0,0.4,-2.0)]))),
                    Shape(
                      appearance=Appearance(
                        material=Material(transparency=0.2)),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                        coord=Coordinate(point=[(2.0,0.4,0.0),(2.0,0.4,-2.0),(1.0,1.2,-1.7),(1.0,1.2,-0.3)])))]),
                  Transform(translation=(1.6,0.2,-0.09),
                    children=[
                    Group(DEF='SONAR',
                      children=[
                      Transform(
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.2,0.2,0.2))),
                          geometry=Box(size=(0.2,0.2,0.2)))]),
                      Transform(rotation=(1,0,0,1.57),
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.7,0.5,0.2))),
                          geometry=Cylinder(height=0.21,radius=0.08))])])]),
                  Transform(translation=(-1.6,0.2,-0.09),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(translation=(1.6,0.2,-1.91),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(translation=(-1.6,0.2,-1.91),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(-1.91,0.2,-0.4),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(-1.91,0.2,-1.6),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(1.91,0.2,-0.2),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(1.91,0.2,-0.4),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(1.91,0.2,-0.6),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(1.91,0.2,-1.4),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(1.91,0.2,-1.6),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(rotation=(0,1,0,1.57),translation=(1.91,0.2,-1.8),
                    children=[
                    Group(USE='SONAR')]),
                  Transform(translation=(-1.6,1.2,-0.5),
                    children=[
                    Group(DEF='HitchGroup',
                      children=[
                      Transform(scale=(0.2,0.2,0.1),
                        children=[
                        Group(USE='Harness')]),
                      Transform(scale=(0.2,0.2,0.1),translation=(0.2,0.0,0.0),
                        children=[
                        Group(USE='Harness')]),
                      Transform(scale=(0.2,0.2,0.1),translation=(0.4,0.0,0.0),
                        children=[
                        Group(USE='Harness')])])]),
                  Transform(translation=(-1.6,1.2,-1.5),
                    children=[
                    Group(USE='HitchGroup')]),
                  Transform(scale=(0.8,0.8,0.8),translation=(0.2,1.2,-0.7),
                    children=[
                    Group(USE='HitchGroup')]),
                  Transform(scale=(0.8,0.8,0.8),translation=(0.2,1.2,-1.3),
                    children=[
                    Group(USE='HitchGroup')]),
                  Transform(rotation=(1,0,0,1.57),translation=(-0.9,1.25,-1.0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.2,0.2,0.2))),
                      geometry=Cylinder(height=1.0,radius=0.05))]),
                  Transform(translation=(-0.5,1.25,-1.0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1.0,1.0,1.0))),
                      geometry=Box(size=(0.4,0.1,0.4)))]),
                  Transform(translation=(-1.5,1.25,-1.0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.2,0.2,0.2))),
                      geometry=Box(size=(0.6,0.15,0.9)))]),
                  Transform(rotation=(1,0,0,-0.185),translation=(-1.8,0.9,-0.17),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.2,0.2,0.2))),
                      geometry=Text(string=["ATRV"],
                        fontStyle=FontStyle(size=0.4,style_='BOLD')))]),
                  Transform(translation=(1.0,0.1,0.0),
                    children=[
                    Group(DEF='HINGE',
                      children=[
                      Transform(
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.2,0.2,0.2))),
                          geometry=Box(size=(0.4,0.2,0.05)))]),
                      Transform(rotation=(0,0,1,1.57),translation=(0.0,-0.12,0.0),
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.4,0.4,0.4))),
                          geometry=Cylinder(height=0.37,radius=0.02))])])]),
                  Transform(translation=(-1.0,0.1,0.0),
                    children=[
                    Group(USE='HINGE')])])]),
              ROUTE(fromField='rotation_changed',fromNode='CaseCylinderSensor',toField='set_rotation',toNode='CaseTransform')])]),
          Transform(rotation=(1,0,0,3.14),translation=(1.0,-0.15,0.0),
            children=[
            Group(USE='HINGE')]),
          Transform(rotation=(1,0,0,3.14),translation=(-1.0,-0.15,0.0),
            children=[
            Group(USE='HINGE')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ATRV.py")
