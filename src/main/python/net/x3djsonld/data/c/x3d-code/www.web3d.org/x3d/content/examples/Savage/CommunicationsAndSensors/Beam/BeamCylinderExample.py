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
    meta(content='BeamCylinderExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 February 2001',name='created'),
    meta(content='27 December 2014',name='modified'),
    meta(content='Produce wireframe or transparent beam cylinders.',name='description'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0,0.3,0.5)]),
    WorldInfo(info=["Produce wireframe or transparent beam cylinders"],title='BeamCylinderPrototype'),
    Viewpoint(description='BeamCylinder example',position=(5,0,10)),
    ExternProtoDeclare(appinfo='Produce wireframe or transparent beam cylinders. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCylinder',url=["BeamCylinderPrototype.x3d#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","BeamCylinderPrototype.wrl#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder"],
      field=[
      field(accessType='initializeOnly',appinfo='Assigning a name to a BeamCylinder aids tracing',name='name',type='SFString'),
      field(accessType='inputOnly',appinfo='(communications) is transmitted signal in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
      field(accessType='inputOnly',appinfo='distance in meters along x axis',name='range',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='distance in meters used until eventIn range sent',name='defaultRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='whether wireframe beam is drawn',name='wireframe',type='SFBool'),
      field(accessType='initializeOnly',appinfo='whether solid beam is drawn',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='meters across vertical y axis',name='beamHeight',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='meters across horizontal z axis',name='beamWidth',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat')]),
    #  Viewable geometry for this scene 
    Group(
      children=[
      ProtoInstance(DEF='BeamCylinderInstance',name='BeamCylinder',
        fieldValue=[
        fieldValue(name='name',value='BeamCylinderInstance'),
        fieldValue(name='defaultRange',value=10),
        fieldValue(name='beamHeight',value=1),
        fieldValue(name='beamWidth',value=0.5),
        fieldValue(name='transparency',value=0.2),
        fieldValue(name='wireframe',value=True),
        fieldValue(name='solid',value=True)]),
      Transform(translation=(5,-3,0),
        children=[
        Billboard(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,0))),
            geometry=Text(string=["Touch text to toggle contact-mode rendering"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6))),
          TouchSensor(description='Hover over text to activate contact mode'),
          Shape(
            #  transparent Box as text-selection assist 
            geometry=Box(size=(9,1,.001)),
            appearance=Appearance(
              material=Material(transparency=1)))]),
        TouchSensor(DEF='TextTouch',description='touch text to toggle contactColor noContactColor'),
        ROUTE(fromField='isOver',fromNode='TextTouch',toField='contact',toNode='BeamCylinderInstance')])]),
    Group(DEF='AnimationGroup',
      children=[
      TimeSensor(DEF='Clock',cycleInterval=10,loop=True),
      ScalarInterpolator(DEF='RangeInterpolator',key=[0,.4,.4,.5,.5,.9,.9,1],keyValue=[0.01,10,0,0,-0.01,-10,0,0]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='RangeInterpolator'),
      ROUTE(fromField='value_changed',fromNode='RangeInterpolator',toField='range',toNode='BeamCylinderInstance'),
      #  ========== 
      ScalarInterpolator(DEF='TransparencyInterpolator',key=[0,.4,.4,.5,.5,.9,.9,1],keyValue=[0,1,1,1,0,1,1,1]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TransparencyInterpolator'),
      ROUTE(fromField='value_changed',fromNode='TransparencyInterpolator',toField='transparency',toNode='BeamCylinderInstance')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BeamCylinderExample.py")
