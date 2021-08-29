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
    meta(content='LightingAlternatives.x3d',name='title'),
    meta(content='Lighting alternatives for best rendering the cathedral.',name='description'),
    meta(content='Michele Foti and Don Brutzman',name='creator'),
    meta(content='19 March 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TODO.html',name='reference'),
    meta(content='http://www.sancarloscathedral.net',name='reference'),
    meta(content='RoyalPresidioChapelHistoricalReferences.pdf',name='reference'),
    meta(content='CulturalHeritageProjectSanCarlosCathedral.pdf',name='reference'),
    meta(content='originals/',name='reference'),
    meta(content='under development',name='warning'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/SanCarlosCathedral/LightingAlternatives.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  #  Index for DEF nodes: DirectionalLights, LightSwitch, Spotlights 
  Scene=Scene(
    #  Note that turning off initial NavigationInfo headlight for WALK mode (interior viewing) must occur in parent scene, SanCarlosCathedral.x3d 
    children=[
    WorldInfo(title='LightingAlternatives.x3d'),
    Switch(DEF='LightSwitch',whichChoice=0,
      children=[
      Group(DEF='AlternativeLight1',
        #  Spotlights from windows (left side) 
        children=[
        SpotLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),cutOffAngle=1,direction=(20,1,-40),intensity=0.2,location=(-6,1,-35)),
        SpotLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),cutOffAngle=1,direction=(20,1,-30),intensity=0.2,location=(1.7,1,-25.4)),
        SpotLight(ambientIntensity=0.2,color=(0.7,0.7,0.7),cutOffAngle=1,direction=(20,1,-20),intensity=0.4,location=(1.7,1,-17))]),
      Group(DEF='AlternativeLight2',
        #  DirectionalLights. They don't seem to work when child of a group node 
        children=[
        DirectionalLight(color=(0.4,0.4,0.4),direction=(-20,1,0)),
        DirectionalLight(color=(0.4,0.4,0.4),direction=(20,1,0)),
        DirectionalLight(color=(0.4,0.4,0.4),direction=(0,1,20)),
        DirectionalLight(color=(0.4,0.4,0.4),direction=(0,1,-60))]),
      Group(DEF='AlternativeLight3',
        #  Spotlights from windows (left side). It simulates a "First morning beam" 
        children=[
        DirectionalLight(color=(0.5,0.5,0.5),direction=(20,1,30),intensity=0.5),
        DirectionalLight(color=(0.5,0.5,0.5),direction=(-20,1,30),intensity=0.5),
        SpotLight(ambientIntensity=0.4,beamWidth=1.5,cutOffAngle=1,direction=(20,1,-50),location=(-6,1,-35),radius=10),
        SpotLight(ambientIntensity=0.4,beamWidth=1.5,cutOffAngle=1,direction=(20,1,-40),location=(1.7,1,-25.4),radius=10),
        SpotLight(ambientIntensity=0.4,beamWidth=1.5,cutOffAngle=1,direction=(20,1,-57),location=(1.7,1,-17),radius=10)]),
      Group(DEF='AlternativeLight4',
        #  Spotlights from windows (left side). It simulates a "Morning Light" 
        children=[
        DirectionalLight(color=(0.6,0.6,0.6),direction=(20,1,-30),intensity=0.6),
        DirectionalLight(color=(0.6,0.6,0.6),direction=(-20,1,-30),intensity=0.6),
        SpotLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),cutOffAngle=1,direction=(20,1,-40),intensity=0.6,location=(-6,1,-35),radius=10),
        SpotLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),cutOffAngle=1,direction=(20,1,-30),intensity=0.6,location=(1.7,1,-25.4),radius=10),
        SpotLight(ambientIntensity=0.2,beamWidth=1,color=(0.6,0.6,0.6),cutOffAngle=1,direction=(20,1,-20),intensity=0.6,location=(1.7,1,-17),radius=10)]),
      Group(DEF='AlternativeLight5',
        #  PointLights from chandeliers, simulating artificial light 
        children=[
        PointLight(DEF='Point1',color=(0.8,0.8,0.8),intensity=0.8,location=(5.8,2.4,-11.5),radius=12.5),
        PointLight(DEF='Point2',color=(0.8,0.8,0.8),intensity=0.8,location=(5.8,2.4,-23),radius=12.5),
        PointLight(DEF='Point3',color=(0.8,0.8,0.8),intensity=0.8,location=(-1.4,2.4,-34.5),radius=12.5),
        PointLight(DEF='Point4',color=(0.8,0.8,0.8),intensity=0.8,location=(13,2.4,-34.5),radius=12.5),
        PointLight(DEF='Point5',color=(0.8,0.8,0.8),intensity=0.8,location=(5.8,2.4,-34.5),radius=12.5),
        PointLight(DEF='Point6',color=(0.8,0.8,0.8),intensity=0.8,location=(5.8,1,-1),radius=12.5),
        PointLight(DEF='Point7',color=(0.8,0.8,0.8),intensity=0.8,location=(5.8,1,-5),radius=12.5)]),
      Group(DEF='AlternativeLight6',
        #  PointLights from chandeliers, simulating artificial light. Tested with HeadLight ON 
        children=[
        PointLight(DEF='Point1a',color=(0.5,0.5,0.5),intensity=0.5,location=(5.8,2.4,-11.5),radius=8),
        PointLight(DEF='Point2a',color=(0.5,0.5,0.5),intensity=0.5,location=(5.8,2.4,-23),radius=8),
        PointLight(DEF='Point3a',color=(0.5,0.5,0.5),intensity=0.5,location=(-1.4,2.4,-34.5),radius=8),
        PointLight(DEF='Point4a',color=(0.5,0.5,0.5),intensity=0.5,location=(13,2.4,-34.5),radius=8),
        PointLight(DEF='Point5a',color=(0.5,0.5,0.5),intensity=0.5,location=(5.8,2.4,-34.5),radius=8),
        PointLight(DEF='Point6a',color=(0.5,0.5,0.5),intensity=0.5,location=(5.8,1,-1),radius=8),
        PointLight(DEF='Point7a',color=(0.5,0.5,0.5),intensity=0.5,location=(5.8,1,-5),radius=8)]),
      Group(DEF='AlternativeLight7',
        #  PointLights from windows (left side). Simulating sunlight 
        children=[
        PointLight(intensity=0.5,location=(-6,1,-35)),
        PointLight(color=(0.1,0.1,0.1),intensity=0.05,location=(1.7,1,-25.4),radius=10),
        PointLight(ambientIntensity=0.4,color=(0.5,0.5,0.5),intensity=0.7,location=(1.7,1,-17),radius=10),
        PointLight(ambientIntensity=0.4,color=(0.5,0.5,0.5),intensity=0.8,location=(1.7,1,-7.5),radius=10)]),
      Group(DEF='AlternativeLight8',
        #  PointLights from windows (left side). Simulating sunlight. Changing Radius Changes the "Intensity" 
        children=[
        PointLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),intensity=0.2,location=(-6,1,-35),radius=30),
        PointLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),intensity=0.2,location=(1.7,1,-25.4),radius=30),
        PointLight(ambientIntensity=0.4,color=(0.7,0.7,0.7),intensity=0.4,location=(1.7,1,-17),radius=30),
        PointLight(ambientIntensity=0.4,color=(0.7,0.7,0.7),intensity=0.4,location=(1.7,1,-7.5),radius=30)]),
      Group(DEF='AlternativeLight9',
        #  PointLights from windows (both sides, six windows). Good inside navigation. 
        children=[
        PointLight(ambientIntensity=0.6,color=(0.5,0.5,0.5),intensity=0.6,location=(1.7,1,-25.4),radius=30),
        PointLight(ambientIntensity=0.3,color=(0.7,0.7,0.7),intensity=0.3,location=(1.7,1,-17),radius=10),
        PointLight(ambientIntensity=0.01,color=(0.4,0.4,0.4),intensity=0.01,location=(1.7,1,-7.5),radius=5),
        PointLight(ambientIntensity=0.6,color=(0.5,0.5,0.5),intensity=0.6,location=(9,1,-25.4),radius=30),
        PointLight(ambientIntensity=0.3,color=(0.7,0.7,0.7),intensity=0.3,location=(9,1,-17),radius=10),
        PointLight(ambientIntensity=0.01,color=(0.1,0.1,0.1),intensity=0.01,location=(9,1,-7.5),radius=5)]),
      Group(DEF='AlternativeLight10',
        #  PointLights from windows (left side). Good inside navigation, but the light is too uniform on one side 
        children=[
        PointLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),intensity=0.2,location=(-6,1,-35)),
        PointLight(ambientIntensity=0.2,color=(0.4,0.4,0.4),intensity=0.2,location=(1.7,1,-25.4)),
        PointLight(ambientIntensity=0.4,color=(0.7,0.7,0.7),intensity=0.4,location=(1.7,1,-17)),
        PointLight(ambientIntensity=0.4,color=(0.7,0.7,0.7),intensity=0.4,location=(1.7,1,-7.5))])]),
    Transform(DEF='Maintch',translation=(2,2.4,-16.75),
      children=[
      TouchSensor(DEF='touch',description='Click here to start'),
      Shape(
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),transparency=1)))]),
    Transform(DEF='maintouch',translation=(0,-5,0),
      children=[
      Transform(DEF='tch0',translation=(3,1.7,-15.525),
        children=[
        Transform(DEF='tex0',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light1"],
              fontStyle=FontStyle(DEF='TextFontStyle',justify=["MIDDLE","MIDDLE"],size=0.15)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))))]),
        Transform(DEF='tex02',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light1"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch0',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch1',translation=(3.5,1.7,-15.525),
        children=[
        Transform(DEF='tex1',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light2"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex12',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light2"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch1',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch2',translation=(4,1.7,-15.525),
        children=[
        Transform(DEF='tex2',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light3"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex22',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light3"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch2',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch3',translation=(4.5,1.7,-15.525),
        children=[
        Transform(DEF='tex3',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light4"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex32',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light4"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch3',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch4',translation=(5,1.7,-15.525),
        children=[
        Transform(DEF='tex4',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light5"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex42',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light5"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch4',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch5',translation=(5.5,1.7,-15.525),
        children=[
        Transform(DEF='tex5',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light6"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex52',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light6"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch5',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch6',translation=(6,1.7,-15.525),
        children=[
        Transform(DEF='tex6',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light7"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex62',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light7"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch6',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch7',translation=(6.5,1.7,-15.525),
        children=[
        Transform(DEF='tex7',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light8"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex72',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light8"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch7',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch8',translation=(7,1.7,-15.525),
        children=[
        Transform(DEF='tex8',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light9"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex82',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light9"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch8',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))]),
      Transform(DEF='tch9',translation=(7.5,1.7,-15.525),
        children=[
        Transform(DEF='tex9',translation=(-0.15,-0.05,0.2),
          children=[
          Shape(
            geometry=Text(string=["Light10"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        Transform(DEF='tex92',rotation=(0,1,0,3.14),translation=(0.15,-0.05,-0.2),
          children=[
          Shape(
            geometry=Text(string=["Light10"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))]),
        TouchSensor(DEF='touch9',description='Click here to start'),
        Shape(
          geometry=Sphere(radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))))])]),
    TimeSensor(DEF='time',cycleInterval=15),
    TimeSensor(DEF='time0'),
    TimeSensor(DEF='time1'),
    TimeSensor(DEF='time2'),
    TimeSensor(DEF='time3'),
    TimeSensor(DEF='time4'),
    TimeSensor(DEF='time5'),
    TimeSensor(DEF='time6'),
    TimeSensor(DEF='time7'),
    TimeSensor(DEF='time8'),
    TimeSensor(DEF='time9'),
    ROUTE(fromField='touchTime',fromNode='touch',toField='startTime',toNode='time'),
    ROUTE(fromField='touchTime',fromNode='touch0',toField='startTime',toNode='time0'),
    ROUTE(fromField='touchTime',fromNode='touch1',toField='startTime',toNode='time1'),
    ROUTE(fromField='touchTime',fromNode='touch2',toField='startTime',toNode='time2'),
    ROUTE(fromField='touchTime',fromNode='touch3',toField='startTime',toNode='time3'),
    ROUTE(fromField='touchTime',fromNode='touch4',toField='startTime',toNode='time4'),
    ROUTE(fromField='touchTime',fromNode='touch5',toField='startTime',toNode='time5'),
    ROUTE(fromField='touchTime',fromNode='touch6',toField='startTime',toNode='time6'),
    ROUTE(fromField='touchTime',fromNode='touch7',toField='startTime',toNode='time7'),
    ROUTE(fromField='touchTime',fromNode='touch8',toField='startTime',toNode='time8'),
    ROUTE(fromField='touchTime',fromNode='touch9',toField='startTime',toNode='time9'),
    PositionInterpolator(DEF='Sequenc',key=[0,0.01,0.99,1],keyValue=[(0,-5,0),(0,0,0),(0,0,0),(0,-5,0)]),
    IntegerSequencer(DEF='Sequenc0',key=[0,1],keyValue=[0,0]),
    IntegerSequencer(DEF='Sequenc1',key=[0,1],keyValue=[0,1]),
    IntegerSequencer(DEF='Sequenc2',key=[0,1],keyValue=[0,2]),
    IntegerSequencer(DEF='Sequenc3',key=[0,1],keyValue=[0,3]),
    IntegerSequencer(DEF='Sequenc4',key=[0,1],keyValue=[0,4]),
    IntegerSequencer(DEF='Sequenc5',key=[0,1],keyValue=[0,5]),
    IntegerSequencer(DEF='Sequenc6',key=[0,1],keyValue=[0,6]),
    IntegerSequencer(DEF='Sequenc7',key=[0,1],keyValue=[0,7]),
    IntegerSequencer(DEF='Sequenc8',key=[0,1],keyValue=[0,8]),
    IntegerSequencer(DEF='Sequenc9',key=[0,1],keyValue=[0,9]),
    ROUTE(fromField='fraction_changed',fromNode='time',toField='set_fraction',toNode='Sequenc'),
    ROUTE(fromField='fraction_changed',fromNode='time0',toField='set_fraction',toNode='Sequenc0'),
    ROUTE(fromField='fraction_changed',fromNode='time1',toField='set_fraction',toNode='Sequenc1'),
    ROUTE(fromField='fraction_changed',fromNode='time2',toField='set_fraction',toNode='Sequenc2'),
    ROUTE(fromField='fraction_changed',fromNode='time3',toField='set_fraction',toNode='Sequenc3'),
    ROUTE(fromField='fraction_changed',fromNode='time4',toField='set_fraction',toNode='Sequenc4'),
    ROUTE(fromField='fraction_changed',fromNode='time5',toField='set_fraction',toNode='Sequenc5'),
    ROUTE(fromField='fraction_changed',fromNode='time6',toField='set_fraction',toNode='Sequenc6'),
    ROUTE(fromField='fraction_changed',fromNode='time7',toField='set_fraction',toNode='Sequenc7'),
    ROUTE(fromField='fraction_changed',fromNode='time8',toField='set_fraction',toNode='Sequenc8'),
    ROUTE(fromField='fraction_changed',fromNode='time9',toField='set_fraction',toNode='Sequenc9'),
    ROUTE(fromField='value_changed',fromNode='Sequenc',toField='translation',toNode='maintouch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc0',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc1',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc2',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc3',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc4',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc5',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc6',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc7',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc8',toField='whichChoice',toNode='LightSwitch'),
    ROUTE(fromField='value_changed',fromNode='Sequenc9',toField='whichChoice',toNode='LightSwitch')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LightingAlternatives.py")
