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
    GeoLOD(center=(41.54892011792395,-71.57136730636591,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-4.x3d'],child2Url=['../../tiles/4/newport8-5.x3d'],child3Url=['../../tiles/4/newport9-4.x3d'],child4Url=['../../tiles/4/newport9-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[42,34,34,38,43,81,67,69,59,37,31,33,33,32,33,33,28,30,33,32,53,57,46,37,33,34,34,56,63,71,57,37,37,36,33,36,34,34,33,32,32,30,47,50,63,41,35,38,38,36,44,39,39,40,39,38,34,55,65,48,30,30,35,39,38,45,75,38,33,34,39,36,36,35,41,37,41,40,34,64,84,79,49,27,30,32,35,35,90,63,33,36,37,37,39,39,46,46,36,41,42,56,90,95,70,52,50,32,36,40,86,65,42,39,40,54,50,48,61,43,36,49,63,58,62,76,87,82,67,51,36,39,93,73,54,40,41,49,43,45,43,37,41,52,73,78,64,72,75,91,81,91,57,37,85,64,54,43,45,39,42,40,46,48,40,58,66,64,72,70,75,88,85,76,69,57,73,72,62,61,67,55,42,41,52,44,46,63,71,62,62,76,90,92,100,68,67,74,104,92,75,87,99,81,49,40,43,43,40,49,78,81,73,66,73,83,70,63,61,70,117,104,94,107,104,78,52,51,51,46,46,54,55,69,82,74,53,61,56,53,52,58,122,116,103,113,93,66,53,51,50,61,46,40,53,52,69,64,58,46,61,48,47,40,134,115,112,103,74,71,69,61,68,76,54,54,48,54,51,52,49,50,56,56,48,52,119,118,104,86,76,86,83,57,59,57,61,74,56,44,46,50,49,51,42,57,58,55,117,111,99,80,88,89,92,84,66,73,71,79,63,53,44,44,52,58,58,62,63,64,100,102,93,97,112,103,111,113,74,81,66,77,63,50,49,47,53,57,65,70,64,61,108,115,99,116,130,125,105,88,76,77,76,64,46,50,56,57,50,59,74,69,60,58,110,103,105,138,142,117,87,85,84,79,65,57,56,65,80,70,55,60,82,77,63,62,115,101,109,139,136,98,92,101,85,78,68,58,70,85,87,64,59,63,86,84,71,66,121,127,122,119,111,112,119,107,87,94,69,55,71,103,97,82,71,61,97,96,75,71,129,124,136,124,129,122,114,94,108,94,74,68,83,108,105,97,80,72,88,78,72,71,129,125,136,125,131,122,112,96,108,93,74,69,82,108,107,98,80,72,87,79,72,71],
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
