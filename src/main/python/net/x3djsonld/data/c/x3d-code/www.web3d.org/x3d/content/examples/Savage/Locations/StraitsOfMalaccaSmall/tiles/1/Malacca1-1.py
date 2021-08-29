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
    GeoViewpoint(description='GeoViewpoint_1_11',geoSystem=['GDC'],position=(4.343236000485898,103.79856273796223,326589.76551218075),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.343236000485898,103.79856273796223,0.0),range=391907.72,child1Url=['../../tiles/2/Malacca2-2.x3d'],child2Url=['../../tiles/2/Malacca2-3.x3d'],child3Url=['../../tiles/2/Malacca3-2.x3d'],child4Url=['../../tiles/2/Malacca3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/Malacca1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.16700001,zDimension=22,zSpacing=0.12116667,height=[254,245,48,45,40,36,45,32,7,3,6,4,-99,-99,-99,-99,-99,-99,2,8,6,416,98,49,68,237,211,52,31,4,5,4,5,-99,-99,-99,-99,-99,-99,5,1,-2,107,73,38,50,97,90,46,29,4,4,5,6,-99,-99,-99,-99,-99,-99,0,2,3,84,79,33,29,33,77,13,33,6,6,3,8,-99,-99,-99,-99,-99,-99,0,1,2,102,74,51,42,65,134,15,8,3,5,3,5,-99,-99,-99,-99,-99,-99,2,1,1,150,70,70,45,92,39,51,7,4,5,3,5,-99,-99,-99,-99,-99,-99,3,1,1,1533,294,73,101,71,554,97,19,6,7,5,5,-99,-99,-99,-99,-99,-99,4,2,4,160,284,179,211,214,353,34,36,5,5,4,5,-99,-99,-99,-99,-99,-99,2,2,1,267,67,152,148,247,195,62,27,9,6,5,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,78,211,115,329,320,223,52,35,6,8,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,145,132,161,268,457,329,109,32,5,6,8,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,167,199,217,131,565,321,286,364,4,5,8,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,225,517,142,194,433,253,239,55,3,5,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,826,224,498,282,432,348,59,34,5,7,2,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,346,163,148,620,518,331,55,33,4,5,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,177,97,132,147,299,40,283,13,6,7,9,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,96,93,181,138,159,25,12,5,4,4,6,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,205,52,336,358,638,15,7,6,7,7,4,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,232,235,517,451,54,40,8,8,3,7,5,10,-99,-99,-99,-99,-99,-99,-99,-99,-99,193,80,55,370,23,14,5,5,6,4,5,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,40,62,202,443,9,6,5,3,3,3,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,49,69,220,414,9,5,5,3,3,3,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
