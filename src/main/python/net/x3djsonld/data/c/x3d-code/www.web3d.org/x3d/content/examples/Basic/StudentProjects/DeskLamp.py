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
    meta(content='DeskLamp.x3d',name='title'),
    meta(content='A file decribing a desk lamp',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='1 April 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeskLamp.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='DeskLamp.x3d'),
    Viewpoint(description='DeskLamp',position=(0,0.1,1)),
    Group(
      children=[
      PlaneSensor(DEF='movelamp',description='click and drag to move lamp'),
      Transform(DEF='lamp',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='color',diffuseColor=(0.8,0,0.6))),
          geometry=Cylinder(height=0.01,radius=0.1)),
        Group(
          children=[
          SphereSensor(DEF='movefirstarm',description='click and drag to move arm',offset=(1,0,0,-3.58)),
          Transform(DEF='firstarm',center=(0,-0.15,0),rotation=(1,0,0,-0.7),translation=(0,0.15,0),
            children=[
            Shape(DEF='lamparm',
              appearance=Appearance(
                material=Material(USE='color')),
              geometry=Cylinder(height=0.3,radius=0.01)),
            Group(
              children=[
              SphereSensor(DEF='movesecondarm',description='click and drag to move arm',offset=(1,0,0,-1.25)),
              Transform(DEF='secondarm',center=(0,-0.15,0),rotation=(1,0,0,1.9),translation=(0,0.3,0),
                children=[
                Shape(USE='lamparm'),
                Group(
                  children=[
                  SphereSensor(DEF='movelampshade',description='click and drag to move shade',offset=(1,0,0,-1.25)),
                  Transform(DEF='lampshade',center=(0,0.075,0),rotation=(1,0,0,-1.25),translation=(0,0.075,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='color')),
                      geometry=Cone(bottom=False,bottomRadius=0.12,height=0.15)),
                    Transform(translation=(0,-0.05,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(DEF='color2',diffuseColor=(0.4,0.4,0.4))),
                        geometry=Sphere(radius=0.05)),
                      TimeSensor(DEF='clock1',cycleInterval=0.5),
                      ColorInterpolator(DEF='colorpath1',key=[0,1],keyValue=[(0.4,0.4,0.4),(1,1,0)]),
                      ColorInterpolator(DEF='colorpath2',key=[0,1],keyValue=[(1,1,0),(0.4,0.4,0.4)]),
                      TimeSensor(DEF='clock2',cycleInterval=0.5),
                      SpotLight(DEF='light',ambientIntensity=.8,color=(1,1,0),cutOffAngle=.785398,direction=(0,-1,0.7),on=False,radius=20)])])])])])])]),
        Group(
          children=[
          Transform(DEF='button1',translation=(-0.02,0.015,0.05),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=Cylinder(height=0.03,radius=0.01)),
            TouchSensor(DEF='touch1',description='click to turn on'),
            Script(DEF='code1',
              field=[
              field(accessType='outputOnly',name='value',type='SFBool'),
              field(accessType='inputOnly',name='set_light',type='SFTime')])]),
          Transform(DEF='button2',translation=(0.02,0.015,0.05),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))),
              geometry=Cylinder(height=0.03,radius=0.01)),
            TouchSensor(DEF='touch2',description='click to turn off'),
            Script(DEF='code2',
              field=[
              field(accessType='outputOnly',name='value',type='SFBool'),
              field(accessType='inputOnly',name='set_light',type='SFTime')])])])])]),
    ROUTE(fromField='translation_changed',fromNode='movelamp',toField='set_translation',toNode='lamp'),
    ROUTE(fromField='rotation_changed',fromNode='movefirstarm',toField='set_rotation',toNode='firstarm'),
    ROUTE(fromField='rotation_changed',fromNode='movesecondarm',toField='set_rotation',toNode='secondarm'),
    ROUTE(fromField='rotation_changed',fromNode='movelampshade',toField='set_rotation',toNode='lampshade'),
    ROUTE(fromField='touchTime',fromNode='touch1',toField='set_startTime',toNode='clock1'),
    ROUTE(fromField='fraction_changed',fromNode='clock1',toField='set_fraction',toNode='colorpath1'),
    ROUTE(fromField='value_changed',fromNode='colorpath1',toField='set_emissiveColor',toNode='color2'),
    ROUTE(fromField='touchTime',fromNode='touch2',toField='set_startTime',toNode='clock2'),
    ROUTE(fromField='fraction_changed',fromNode='clock2',toField='set_fraction',toNode='colorpath2'),
    ROUTE(fromField='value_changed',fromNode='colorpath2',toField='set_emissiveColor',toNode='color2'),
    ROUTE(fromField='touchTime',fromNode='touch1',toField='set_light',toNode='code1'),
    ROUTE(fromField='value',fromNode='code1',toField='set_on',toNode='light'),
    ROUTE(fromField='touchTime',fromNode='touch2',toField='set_light',toNode='code2'),
    ROUTE(fromField='value',fromNode='code2',toField='set_on',toNode='light')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DeskLamp.py")
