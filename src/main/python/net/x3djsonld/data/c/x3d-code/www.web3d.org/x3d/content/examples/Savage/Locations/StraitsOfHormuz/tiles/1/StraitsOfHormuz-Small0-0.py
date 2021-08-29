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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_1_00',geoSystem=['GDC'],position=(25.8972799768378,55.729040188915306,116654.7662347948),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.8972799768378,55.729040188915306,0.0),range=139985.72,child1Url=['../../tiles/2/StraitsOfHormuz-Small0-0.x3d'],child2Url=['../../tiles/2/StraitsOfHormuz-Small0-1.x3d'],child3Url=['../../tiles/2/StraitsOfHormuz-Small1-0.x3d'],child4Url=['../../tiles/2/StraitsOfHormuz-Small1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/StraitsOfHormuz-Small0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.057387054,zDimension=22,zSpacing=0.042702835,height=[4,2,4,4,0,1,-3,13,22,29,49,48,74,88,125,179,272,541,377,424,150,86,0,2,3,0,2,2,2,2,15,25,45,39,51,60,84,124,210,505,194,291,141,165,2,0,2,2,2,4,2,0,2,11,19,26,43,43,66,114,218,346,155,344,42,29,2,3,4,3,1,4,1,3,0,2,13,24,59,32,35,170,446,330,297,39,253,215,2,4,4,3,3,5,3,1,4,2,6,9,70,20,17,120,609,920,561,0,1,2,5,2,3,5,5,4,2,1,3,1,3,7,33,54,12,40,514,1237,475,-2,-2,1,4,3,2,3,2,4,3,0,0,2,1,0,0,31,6,30,185,771,1215,472,5,1,6,5,2,4,2,5,2,2,1,2,1,2,2,0,0,43,708,545,1010,560,165,244,4,1,5,3,1,4,4,0,3,2,0,4,1,3,0,17,262,667,547,648,302,416,1,3,3,4,3,5,2,1,2,1,0,0,0,3,1,15,463,735,453,453,430,485,10,2,2,3,5,2,1,1,0,2,0,0,0,2,1,0,566,694,598,765,654,513,3,4,5,3,2,1,4,3,1,0,1,0,1,0,1,2,407,1294,1164,772,1063,1098,2,4,6,3,5,2,3,2,1,1,0,0,1,0,1,3,34,132,1265,1206,979,1017,5,2,2,5,2,4,0,2,2,1,0,0,0,0,1,0,9,318,980,1199,202,257,0,4,4,3,3,4,2,2,3,1,0,0,0,0,0,0,1,795,280,502,131,134,1,0,7,-1,3,3,2,3,1,0,0,0,0,1,1,1,3,164,932,98,146,138,3,8,16,1,3,3,4,3,1,0,2,1,0,1,0,0,2,1,529,153,45,15,4,2,5,2,6,3,4,2,0,0,1,1,0,0,0,1,0,4,388,132,220,99,3,2,0,12,4,1,0,2,0,2,1,1,0,1,0,0,2,0,3,2,316,555,0,6,70,7,1,8,3,1,1,1,2,1,0,-1,1,2,0,1,2,8,2,3,0,4,0,-1,9,0,0,1,4,0,1,0,0,0,2,1,2,3,5,5,3,2,1,7,1,0,10,2,0,2,3,0,2,0,0,0,2,1,2,3,6,4,3,2],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
