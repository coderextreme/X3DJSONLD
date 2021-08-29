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
    meta(content='Bell.x3d',name='title'),
    meta(content='Bell for San Carlos Cathedral',name='description'),
    meta(content='Michele Foti',name='creator'),
    meta(content='8 March 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='update bell sound with proper recording of actual bells at San Carlos',name='TODO'),
    meta(content='TODO.html',name='reference'),
    meta(content='invert geometry?',name='TODO'),
    meta(content='http://www.sancarloscathedral.net',name='reference'),
    meta(content='RoyalPresidioChapelHistoricalReferences.pdf',name='reference'),
    meta(content='CulturalHeritageProjectSanCarlosCathedral.pdf',name='reference'),
    meta(content='originals/',name='reference'),
    meta(content='originals/ModelSanCarlosChurchFeb-3-2012.x3d',name='reference'),
    meta(content='under development',name='warning'),
    meta(content='http://www.audiomicro.com/church-bell-horns-bells-church-bell-free-sound-effects-45577',name='reference'),
    meta(content='Audacity, http://audacity.sourceforge.net',name='generator'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/SanCarlosCathedral/Bell.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Bell.x3d'),
    Background(skyColor=[(1,1,1)]),
    Transform(DEF='Bell',rotation=(0,1,0,-1.57),translation=(0.75,-0.8,0),
      #  Bell shape 
      children=[
      TouchSensor(DEF='TouchButton',description='touch to activate'),
      Transform(DEF='BellShape',center=(0,0.55,0),scale=(4.2,1.2,4.2),translation=(-0.14,0.55,0.75),
        children=[
        Shape(
          geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(0.142,0),(0.141822,0.0071),(0.141288,0.0142),(0.140393,0.0213),(0.139131,0.0284),(0.137491,0.0355),(0.135459,0.0426),(0.133018,0.0497),(0.130145,0.0568),(0.12681,0.0639),(0.122976,0.071),(0.118593,0.0781),(0.1136,0.0852),(0.107911,0.0923),(0.101408,0.0994),(0.093924,0.1065),(0.0852,0.1136),(0.074803,0.1207),(0.061896,0.1278),(0.044339,0.1349),(0,0.142),(-0,0.142),(-0.044339,0.1349),(-0.061896,0.1278),(-0.074803,0.1207),(-0.0852,0.1136),(-0.093924,0.1065),(-0.101408,0.0994),(-0.107911,0.0923),(-0.1136,0.0852),(-0.118593,0.0781),(-0.122976,0.071),(-0.12681,0.0639),(-0.130145,0.0568),(-0.133018,0.0497),(-0.135459,0.0426),(-0.137491,0.0355),(-0.139131,0.0284),(-0.140393,0.0213),(-0.141288,0.0142),(-0.141822,0.0071),(-0.142,0),(-0.142,0),(-0.1349,-0.044339),(-0.1278,-0.061896),(-0.1207,-0.074803),(-0.1136,-0.0852),(-0.1065,-0.093924),(-0.0994,-0.101408),(-0.0923,-0.107911),(-0.0852,-0.1136),(-0.0781,-0.118593),(-0.071,-0.122976),(-0.0639,-0.12681),(-0.0568,-0.130145),(-0.0497,-0.133018),(-0.0426,-0.135459),(-0.0355,-0.137491),(-0.0284,-0.139131),(-0.0213,-0.140393),(-0.0142,-0.141288),(-0.0071,-0.141822),(0,-0.142),(0.044339,-0.1349),(0.061896,-0.1278),(0.074803,-0.1207),(0.0852,-0.1136),(0.093924,-0.1065),(0.101408,-0.0994),(0.107911,-0.0923),(0.1136,-0.0852),(0.118593,-0.0781),(0.122976,-0.071),(0.12681,-0.0639),(0.130145,-0.0568),(0.133018,-0.0497),(0.135459,-0.0426),(0.137491,-0.0355),(0.139131,-0.0284),(0.140393,-0.0213),(0.141288,-0.0142),(0.141822,-0.0071),(0.142,0)],scale=[(1,1),(0.9,0.9),(0.8,0.8),(0.73,0.73),(0.68,0.68),(0.65,0.65),(0.595,0.595),(0.5,0.5)],solid=False,spine=[(0,0,0),(0,0.08,0),(0,0.1,0),(0,0.183,0),(0,0.266,0),(0,0.35,0),(0,0.6,0),(0,0.65,0)]),
          appearance=Appearance(
            material=Material(DEF='BellColor',diffuseColor=(0.6,0.6,0.6))))]),
      #  Support 
      Transform(DEF='BellSupport',rotation=(0,1,0,1.57),scale=(1.12,0.85,0.85),translation=(-0.15,0.27,-0.286),
        children=[
        Transform(DEF='BellSupportOrizzontal',rotation=(0,0,1,1.57),translation=(-0.92,0.975,0),
          children=[
          Shape(
            geometry=Cylinder(height=1.5,radius=0.05),
            appearance=Appearance(
              material=Material(DEF='Gray1',diffuseColor=(0.333,0.266,0.274))))]),
        Transform(DEF='BellSupportArc',translation=(0,-0.05,0),
          children=[
          Transform(DEF='BellSupportArc1',translation=(-0.93,1.37,0),
            children=[
            Shape(
              geometry=Box(size=(0.553,0.07,0.07)),
              appearance=Appearance(
                material=Material(USE='Gray1')))]),
          Transform(DEF='BellSupportArc2',rotation=(0,0,1,0.785),translation=(-1.25,1.31,0),
            children=[
            Shape(
              geometry=Box(size=(0.2,0.07,0.07)),
              appearance=Appearance(
                material=Material(USE='Gray1')))]),
          Transform(DEF='BellSupportArc3',rotation=(0,0,1,1.57),translation=(-1.31,1.163,0),
            children=[
            Shape(
              geometry=Box(size=(0.2,0.07,0.07)),
              appearance=Appearance(
                material=Material(USE='Gray1')))]),
          Transform(DEF='BellSupportArc4',rotation=(0,0,1,-0.785),translation=(-0.61,1.31,0),
            children=[
            Shape(
              geometry=Box(size=(0.2,0.07,0.07)),
              appearance=Appearance(
                material=Material(USE='Gray1')))]),
          Transform(DEF='BellSupportArc5',rotation=(0,0,1,1.57),translation=(-0.55,1.163,0),
            children=[
            Shape(
              geometry=Box(size=(0.2,0.07,0.07)),
              appearance=Appearance(
                material=Material(USE='Gray1')))])])]),
      #  Clapper 
      Transform(DEF='BellClapper',center=(0,0.2,0),translation=(-0.15,0.87,0.75),
        children=[
        Transform(DEF='BellClapper1',
          children=[
          Shape(
            geometry=Cylinder(height=0.4,radius=0.03),
            appearance=Appearance(
              material=Material(DEF='BellColor2',diffuseColor=(0.558,0.500,0.500))))]),
        Transform(DEF='BellClapper2',translation=(0,-0.2,0),
          children=[
          Shape(
            geometry=Sphere(radius=0.05),
            appearance=Appearance(
              material=Material(USE='BellColor2')))])]),
      Sound(location=(0,0.5,0),
        #  TODO update sound source using actual San Carlos recording 
        #  This bell recording is 3 seconds and matches our TimeSensor cycleInterval 
        source=AudioClip(DEF='ChurchBellOneTime',description='Church bell tolling',url=["ChurchBellOneTime.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/SanCarlosCathedral/ChurchBellOneTime.wav"])),
      #  Animation 
      BooleanToggle(DEF='Toggler'),
      ROUTE(fromField='isActive',fromNode='TouchButton',toField='set_boolean',toNode='Toggler'),
      TimeSensor(DEF='TimeSensor',cycleInterval=3),
      ROUTE(fromField='toggle_changed',fromNode='Toggler',toField='loop',toNode='TimeSensor'),
      ROUTE(fromField='cycleTime',fromNode='TimeSensor',toField='startTime',toNode='ChurchBellOneTime'),
      OrientationInterpolator(DEF='RotateBell',key=[0,0.10,0.20,0.30,0.40,0.50,0.60,0.70,0.80,0.90,1],keyValue=[(0,0,1,0),(0,0,1,-0.5),(0,0,1,-0.7),(0,0,1,-0.9),(0,0,1,-1),(0,0,1,0),(0,0,1,1),(0,0,1,0.9),(0,0,1,0.7),(0,0,1,0.2),(0,0,1,0)]),
      OrientationInterpolator(DEF='RotateClapper',key=[0,0.05,0.1,0.15,0.25,0.35,0.48,0.52,0.55,0.64,0.70,0.75,0.80,0.90,1],keyValue=[(0,0,1,0),(0,0,1,-0.5),(0,0,1,-0.8),(0,0,1,-0.8),(0,0,1,-1),(0,0,1,-0.5),(0,0,1,0.3),(0,0,1,0.8),(0,0,1,1.6),(0,0,1,2.1),(0,0,1,1.5),(0,0,1,1),(0,0,1,0.4),(0,0,1,0.2),(0,0,1,0)]),
      ROUTE(fromField='fraction_changed',fromNode='TimeSensor',toField='set_fraction',toNode='RotateClapper'),
      ROUTE(fromField='fraction_changed',fromNode='TimeSensor',toField='set_fraction',toNode='RotateBell'),
      ROUTE(fromField='value_changed',fromNode='RotateBell',toField='rotation',toNode='BellShape'),
      ROUTE(fromField='value_changed',fromNode='RotateClapper',toField='rotation',toNode='BellClapper')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bell.py")
