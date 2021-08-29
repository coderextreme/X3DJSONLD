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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='BackgroundCollection.x3d',name='title'),
    meta(content='Collection of example Background nodes for author reuse, browse by selecting corresponding viewpoints.',name='description'),
    meta(content='28 December 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas',name='reference'),
    meta(content='https://www.web3d.org/x3d/tooltips/X3dTooltips.html#Background',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/enveffects.html#Background',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/enveffects.html#Concepts',name='reference'),
    meta(content='https://x3dgraphics.com/slidesets/X3dForWebAuthors/Chapter11-LightingEnvironment.pdf',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Visualization/BackgroundCollection.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BackgroundCollection.x3d'),
    Group(DEF='AllLandBackgrounds',
      children=[
      Background(DEF='BlueSkyWhiteHorizonBrownLand',groundAngle=[1.309,1.5708],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
      Viewpoint(DEF='BlueSkyWhiteHorizonBrownLandViewpoint',description='Blue Sky White Horizon Brown Land'),
      ROUTE(fromField='isBound',fromNode='BlueSkyWhiteHorizonBrownLandViewpoint',toField='set_bind',toNode='BlueSkyWhiteHorizonBrownLand')]),
    Group(DEF='AllSeaBackgrounds',
      children=[
      Background(DEF='BlueOceanWhiteHorizon',groundAngle=[1.309,1.570796],groundColor=[(0,0.3,.7),(0,0.35,0.75),(0,0.4,0.8)],skyAngle=[1.309,1.571],skyColor=[(0,0.3,0.8),(0,0.5,1),(1,1,1)]),
      Viewpoint(DEF='BlueOceanWhiteHorizonViewpoint',description='Blue Ocean White Horizon'),
      ROUTE(fromField='isBound',fromNode='BlueOceanWhiteHorizonViewpoint',toField='set_bind',toNode='BlueOceanWhiteHorizon'),
      Background(DEF='OvercastSkyBlueOcean',groundAngle=[0.1,1.5,1.56,1.570796],groundColor=[(0,0,0),(0,0.1,0.2),(0,0.1,0.2),(0,0.15,0.3),(0.1,0.1,0.1)],skyAngle=[0.1,1.4,1.5,1.565,1.57079],skyColor=[(0.1,0.1,0.1),(0.2,0.2,0.2),(0.2,0.2,0.2),(0,0.3804,0.4784),(0,0.2,0.4),(0.4,0.4,0.4)]),
      Viewpoint(DEF='OvercastSkyBlueOceanViewpoint',description='Overcast Sky Blue Ocean'),
      ROUTE(fromField='isBound',fromNode='OvercastSkyBlueOceanViewpoint',toField='set_bind',toNode='OvercastSkyBlueOcean'),
      Background(DEF='BlueSkyBlueOcean',groundAngle=[1.57079],groundColor=[(0,0.15,0.25),(0,0.15,0.25)],skyColor=[(0,0.3,0.5)]),
      Viewpoint(DEF='BlueSkyBlueOceanViewpoint',description='Blue Sky Blue Ocean'),
      ROUTE(fromField='isBound',fromNode='BlueSkyBlueOceanViewpoint',toField='set_bind',toNode='BlueSkyBlueOcean')]),
    Group(DEF='AllSkyBackgrounds',
      children=[
      Background(DEF='SimplyWhite',skyColor=[(1,1,1)]),
      Viewpoint(DEF='SimplyWhiteViewpoint',description='Simply White'),
      ROUTE(fromField='isBound',fromNode='SimplyWhiteViewpoint',toField='set_bind',toNode='SimplyWhite'),
      Background(DEF='SimplyGrey',skyColor=[(0.8,0.8,0.8)]),
      Viewpoint(DEF='SimplyGreyViewpoint',description='Simply Grey'),
      ROUTE(fromField='isBound',fromNode='SimplyGreyViewpoint',toField='set_bind',toNode='SimplyGrey'),
      Background(DEF='SimplyDarkGrey',skyColor=[(0.4,0.4,0.4)]),
      Viewpoint(DEF='SimplyDarkGreyViewpoint',description='Simply Dark Grey'),
      ROUTE(fromField='isBound',fromNode='SimplyDarkGreyViewpoint',toField='set_bind',toNode='SimplyDarkGrey'),
      Background(DEF='SimplyBlack'),
      Viewpoint(DEF='SimplyBlackViewpoint',description='Simply Black'),
      ROUTE(fromField='isBound',fromNode='SimplyBlackViewpoint',toField='set_bind',toNode='SimplyBlack')]),
    Group(DEF='AllVarietyBackgrounds',
      children=[
      Background(DEF='BackgroundTest1',groundAngle=[1,1.4,1.5],groundColor=[(0,0,0),(0.2157,1,0.1216),(0.5,0.5,0.5),(1,1,1)],skyAngle=[1,1.309,1.57079],skyColor=[(0,0,0),(0.1647,0.0588,1),(0.5,0.5,0.5),(1,1,1)]),
      Background(DEF='BackgroundTest2',groundAngle=[1,1.309],groundColor=[(0,0.3,.7),(0,0.35,0.75),(0,0.4,0.8)],skyAngle=[1.309,1.57079],skyColor=[(0,0.3,0.8),(0,0.5,1),(1,1,1)]),
      Background(DEF='BackgroundTest3',groundAngle=[1.57079],groundColor=[(0,0.15,0.25),(0,0.15,0.25)],skyColor=[(0,0.3,0.5)]),
      Background(DEF='BackgroundTest4',groundAngle=[1.57079],groundColor=[(0,0.15,0.25),(0,0.15,0.25)],skyColor=[(0,0.3,0.5)]),
      Viewpoint(DEF='ViewpointTest1',description='Test1'),
      ROUTE(fromField='isBound',fromNode='ViewpointTest1',toField='set_bind',toNode='BackgroundTest1'),
      Viewpoint(DEF='ViewpointTest2',description='Test2'),
      ROUTE(fromField='isBound',fromNode='ViewpointTest2',toField='set_bind',toNode='BackgroundTest2'),
      Viewpoint(DEF='ViewpointTest3',description='Test3'),
      ROUTE(fromField='isBound',fromNode='ViewpointTest3',toField='set_bind',toNode='BackgroundTest3'),
      Viewpoint(DEF='ViewpointTest4',description='Test4'),
      ROUTE(fromField='isBound',fromNode='ViewpointTest4',toField='set_bind',toNode='BackgroundTest4')]),
    Group(DEF='UnboundViewpoints',
      #  The final two viewpoints are not separately bound and can be selected to check any of the other Background nodes 
      children=[
      Viewpoint(description='Looking up at current Background zenith',orientation=(1,0,0,1.570796)),
      Viewpoint(description='Looking down at current Background nadir',orientation=(1,0,0,-1.570796))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BackgroundCollection.py")
