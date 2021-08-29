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
    meta(content='BeachTanks.x3d',name='title'),
    meta(content='NPS beach-site old sewage treatment tanks. Dimensions (127, 20, 35) feet = (38.3, 6.1, 10.7) meters.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 July 2001',name='created'),
    meta(content='12 August 2003',name='translated'),
    meta(content='28 November 2019',name='modified'),
    meta(content='BeachTanks.original.wrl',name='reference'),
    meta(content='SingleTankDimensions.png',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BeachTanks.x3d',name='identifier'),
    meta(content='Cosmo Worlds V2.0',name='generator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["NPS Beach Tanks"],title='BeachTanks.x3d'),
    PointLight(location=(0.0,1.62486,1.36244)),
    #  ==================== 
    ExternProtoDeclare(appinfo='Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane size 20m by 20m.',name='GridXZ',url=["../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
      field=[
      field(accessType='initializeOnly',appinfo='Purpose of this grid displayed for overall Viewpoint',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='color for descriptive labels at grid edges and corners',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default unscaled size: 10m by 10m',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='label location offset (in meters) to improve readability',name='labelsOffset',type='SFVec3f'),
      field(accessType='inputOutput',name='originLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-X axis',name='WestLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthWestLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-Z axis',name='NorthLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+X axis',name='EastLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+Z axis',name='SouthLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthWestLabel',type='MFString')]),
    #  ==================== 
    Transform(translation=(20,0,20),
      children=[
      Switch(DEF='AuthoringAssist',whichChoice=1,
        children=[
        Inline(url=["../../Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","../../Savage/Tools/Authoring/GridXZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.wrl"]),
        ProtoInstance(name='GridXZ',
          fieldValue=[
          fieldValue(name='description',value='GridXZ for AUV Beach Tanks'),
          fieldValue(name='labelColor',value=(1,1,1)),
          fieldValue(name='scale',value=(2,1,2)),
          fieldValue(name='labelsOffset',value=(0,2,0)),
          fieldValue(name='originLabel',value=["20 0 20","|"]),
          fieldValue(name='WestLabel',value=["20 0 0 ","|"]),
          fieldValue(name='NorthWestLabel',value=["40 0 0 ","|"]),
          fieldValue(name='NorthLabel',value=["40 0 20","|"]),
          fieldValue(name='NorthEastLabel',value=["40 0 40","|"]),
          fieldValue(name='EastLabel',value=["20 0 40","|"]),
          fieldValue(name='SouthEastLabel',value=[" 0 0 40","|"]),
          fieldValue(name='SouthLabel',value=[" 0 0 20","|"]),
          fieldValue(name='SouthWestLabel',value=["0 0 0","|"])])])]),
    #  ==================== 
    Transform(scale=(4.6,4.6,4.6),translation=(22,-6.0,12.6),
      children=[
      Transform(translation=(-0.231212,1.19209E-7,-0.445523),
        children=[
        Transform(DEF='_0',rotation=(0.0,0.0,1.0,4.71239),scale=(0.25,0.25,0.25),translation=(0.25,0.7625,3.14552),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='_1'),
              texture=ImageTexture(DEF='_2',url=["dirt4.gif","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/dirt4.gif"])),
            geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1],
              coord=Coordinate(point=[(-3.05,19.35,0.1),(-3.05,-19.35,0.1),(3.05,19.35,0.1),(3.05,-19.35,0.1),(3.05,19.35,-0.1),(3.05,-19.35,-0.1),(-3.05,19.35,-0.1),(-3.05,-19.35,-0.1)]),
              texCoord=TextureCoordinate(point=[(0.0,1.0),(0.0,0.0),(1.0,0.0),(1.0,1.0)])))])]),
      Transform(translation=(-0.231309,4.76837E-7,-3.17052),
        children=[
        Transform(USE='_0')]),
      Transform(
        children=[
        Transform(DEF='_4',rotation=(0.57735,0.57735,0.57735,2.09439),scale=(0.25,0.25,0.25),translation=(-4.79385,0.762498,1.3375),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='_1'),
              texture=ImageTexture(USE='_2')),
            geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1],
              coord=Coordinate(point=[(-3.05,5.35,0.1),(-3.05,-5.35,0.1),(3.05,5.35,0.1),(3.05,-5.35,0.1),(3.05,5.35,-0.1),(3.05,-5.35,-0.1),(-3.05,5.35,-0.1),(-3.05,-5.35,-0.1)]),
              texCoord=TextureCoordinate(DEF='RectangularMapping',point=[(0,1),(0,0),(1,0),(1,1)])))])]),
      Transform(translation=(9.62386,2.02656E-6,3.57628E-6),
        children=[
        Transform(USE='_4')]),
      Transform(translation=(8.55684E-4,2.86102E-6,2.72476),
        children=[
        Transform(USE='_4')]),
      Transform(translation=(9.62471,4.88758E-6,2.72476),
        children=[
        Transform(USE='_4')]),
      Transform(translation=(-0.230357,2.98023E-6,2.27924),
        children=[
        Transform(USE='_0')]),
      Transform(translation=(-6.85215E-4,0.0,-2.72525),
        children=[
        Transform(USE='_4')]),
      Transform(translation=(-0.231994,4.76837E-7,-5.89578),
        children=[
        Transform(USE='_0')]),
      Transform(translation=(9.62317,2.02656E-6,-2.72525),
        children=[
        Transform(USE='_4')]),
      Transform(DEF='LongWalkways',translation=(0,-0.025,0),
        children=[
        Transform(rotation=(1.0,0,0,1.57079),scale=(0.25,0.325231,0.25),translation=(0.0169573,1.55,-0.0232847),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.230769,diffuseColor=(0.52,0.32,0.25),shininess=0.93,specularColor=(0.53,0.53,0.53)),
              texture=ImageTexture(DEF='_6',url=["hex.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/hex.jpg"])),
            geometry=Box(size=(38.7,2.07,0.2)))]),
        Transform(rotation=(1.0,0,0,4.71239),scale=(0.25,0.52247,0.25),translation=(0.0186882,1.55,2.7021),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.230769,diffuseColor=(0.52,0.32,0.25),shininess=0.93,specularColor=(0.53,0.53,0.53)),
              texture=ImageTexture(USE='_6')),
            geometry=Box(size=(38.7,0.77,0.2)))])]),
      Transform(scale=(1.25695,1.0,1.0),translation=(-0.613655,0.0,0.0),
        children=[
        Transform(DEF='_7',rotation=(0.577349,0.57735,0.577351,4.18879),scale=(0.247522,0.25,0.25),translation=(2.39002,1.55,4.12235),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.3,0.3,0.3),emissiveColor=(0.15,0.15,0.15),specularColor=(0.5,0.5,0.5)),
              texture=ImageTexture(USE='_6')),
            geometry=IndexedFaceSet(coordIndex=[15,14,4,5,13,12,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,0,1,9,8,-1,9,10,11,8,-1,10,3,2,11,-1,9,1,7,12,-1,10,13,5,3,-1,11,2,4,14,-1,6,0,8,15,-1,17,16,18,19,-1,16,17,10,9,-1,18,16,9,12,-1,19,18,12,13,-1,17,19,13,10,-1,20,21,22,23,-1,21,20,8,11,-1,22,21,11,14,-1,23,22,14,15,-1,20,23,15,8,-1],creaseAngle=0.5,texCoordIndex=[6,4,0,1,5,4,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,5,4,-1,5,7,6,4,-1,7,3,2,6,-1,4,0,1,5,-1,6,7,2,3,-1,7,2,3,6,-1,0,1,5,4,-1,6,4,5,7,-1,4,6,6,4,-1,5,4,4,5,-1,7,5,5,7,-1,6,7,7,6,-1,5,7,6,4,-1,7,5,5,7,-1,6,7,7,6,-1,4,6,6,4,-1,5,4,4,5,-1],
              coord=Coordinate(point=[(-5.35,0.61,0.1),(-5.35,-0.61,0.1),(5.35,0.61,0.1),(5.35,-0.61,0.1),(5.35,0.61,-0.1),(5.35,-0.61,-0.1),(-5.35,0.61,-0.1),(-5.35,-0.61,-0.1),(-1.05193,0.61,0.1),(-1.05193,-0.61,0.1),(0.836004,-0.61,0.1),(0.835993,0.61,0.1),(-1.05193,-0.61,-0.1),(0.841128,-0.610626,-0.0989307),(0.835993,0.61,-0.1),(-1.05193,0.61,-0.1),(-1.05199,-0.956541,0.100583),(0.835941,-0.956541,0.100583),(-1.05199,-0.956541,-0.0994172),(0.841065,-0.957167,-0.0983479),(-1.05193,0.942793,0.0999999),(0.83599,0.942793,0.0999999),(0.835989,0.942793,-0.1),(-1.05193,0.942793,-0.1)]),
              texCoord=TextureCoordinate(USE='RectangularMapping')))])]),
      Transform(scale=(1.0,1.0,0.893756),translation=(-0.00564504,0.0,-2.26582),
        children=[
        Transform(USE='_7')]),
      Transform(scale=(1.0,1.0,0.942275),translation=(-0.00696254,0.0,-5.41092),
        children=[
        Transform(USE='_7')]),
      Transform(translation=(-4.76171,0.0,0.00510687),
        children=[
        Transform(USE='_7')]),
      Transform(scale=(1.0,1.0,0.893756),translation=(-4.76735,0.0,-2.26071),
        children=[
        Transform(USE='_7')]),
      Transform(scale=(1.0,1.0,0.942275),translation=(-4.76867,0.0,-5.40581),
        children=[
        Transform(USE='_7')]),
      Transform(rotation=(-1.0,.498861E-11,-0.440486E-11,1.57079),scale=(0.246032,0.253973,0.25),translation=(3.05619E-8,0.0249995,1.33348),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.116667,diffuseColor=(0.28,0.42,0.6),emissiveColor=(0.14,0.22,0.31),shininess=0.54,specularColor=(0.32,0.4,0.4))),
          geometry=Box(size=(38.7,32.1,0.2)))]),
      Group(
        children=[
        Viewpoint(description='towards ocean',orientation=(-0.786685E-5,0.925611,0.378476,3.13775),position=(0.0472176,7.51329,-6.11978)),
        Viewpoint(description='towards hotel',orientation=(-0.260603,-0.929755,-0.260081,1.64157),position=(-8.52449,5.69685,1.02696)),
        Viewpoint(description='towards building',orientation=(-0.999652,-0.0250519,-0.00823059,0.635059),position=(-0.114891,6.43827,9.05423)),
        Viewpoint(description='towards sand dunes',orientation=(-0.261841,0.928458,0.263449,1.65106),position=(8.77076,5.35957,1.40753)),
        Viewpoint(description='standing on plank',orientation=(-0.179786,-0.967204,-0.179427,1.60213),position=(-2.51286,1.76634,1.40119))]),
      Transform(DEF='_9',center=(0.0,0.0,-1.60187E-7),rotation=(0,0.707107,0.707107,3.14159),scale=(0.246032,0.253973,0.25),translation=(-0.0156405,1.26788,1.35101),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.5,0.5,0.5),shininess=0.02,specularColor=(0.05,0.13,1.0),transparency=0.5)),
          geometry=Box(size=(38.7,32.1,0.2))),
        Group(DEF='WaterLevelAnimation',
          children=[
          TimeSensor(DEF='UnnamedAnimation0Time_11',cycleInterval=10,enabled=False,loop=True),
          PositionInterpolator(DEF='UnnamedTransformTranslationInterp_12',key=[0.0,0.025,0.05,0.075,0.1,0.125,0.15,0.175,0.2,0.225,0.25,0.275,0.3,0.325,0.35,0.375,0.4,0.425,0.45,0.475,0.5,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1.0],keyValue=[(-0.0156404,1.20497,1.35101),(-0.0156404,1.1656,1.35101),(-0.0156403,1.12632,1.35101),(-0.0156403,1.08711,1.35101),(-0.0156402,1.04791,1.35101),(-0.0156402,1.00868,1.35101),(-0.0156402,0.969374,1.35101),(-0.0156401,0.929956,1.35101),(-0.0156401,0.890379,1.35101),(-0.01564,0.850598,1.35101),(-0.01564,0.810572,1.35101),(-0.01564,0.765219,1.35101),(-0.0156399,0.71176,1.35101),(-0.0156398,0.653609,1.35101),(-0.0156398,0.594176,1.35101),(-0.0156397,0.536871,1.35101),(-0.0156397,0.485108,1.35101),(-0.0156396,0.442297,1.35101),(-0.0156396,0.411849,1.35101),(-0.0156396,0.397177,1.35101),(-0.0156396,0.40169,1.35101),(-0.0156396,0.41967,1.35101),(-0.0156396,0.442842,1.35101),(-0.0156397,0.470786,1.35101),(-0.0156397,0.503079,1.35101),(-0.0156397,0.539302,1.35101),(-0.0156398,0.579033,1.35101),(-0.0156398,0.621851,1.35101),(-0.0156399,0.667336,1.35101),(-0.0156399,0.715066,1.35101),(-0.01564,0.76462,1.35101),(-0.01564,0.815577,1.35101),(-0.0156401,0.867517,1.35101),(-0.0156401,0.920018,1.35101),(-0.0156402,0.972659,1.35101),(-0.0156402,1.02502,1.35101),(-0.0156403,1.07668,1.35101),(-0.0156404,1.12722,1.35101),(-0.0156404,1.17621,1.35101),(-0.0156405,1.22324,1.35101),(-0.0156405,1.26788,1.35101)]),
          ROUTE(fromField='fraction_changed',fromNode='UnnamedAnimation0Time_11',toField='set_fraction',toNode='UnnamedTransformTranslationInterp_12'),
          ROUTE(fromField='value_changed',fromNode='UnnamedTransformTranslationInterp_12',toField='set_translation',toNode='_9')])])]),
    #  ==================== 
    Transform(translation=(0,1.1,0),
      children=[
      Transform(scale=(2,2,2),translation=(0,0.25,0),
        children=[
        Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
      Viewpoint(description='Origin +2m up, looking northeast',orientation=(0,1,0,-2.35),position=(-2,2,-2)),
      Viewpoint(description='Origin +1m up, looking northeast',orientation=(0,1,0,-2.35),position=(-2,1,-2))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BeachTanks.py")
