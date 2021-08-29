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
    GeoLOD(center=(41.52473004175595,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-8.x3d'],child2Url=['../../tiles/5/newport16-9.x3d'],child3Url=['../../tiles/5/newport17-8.x3d'],child4Url=['../../tiles/5/newport17-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[42,35,34,37,33,35,40,33,38,61,79,83,73,65,69,69,62,52,37,33,33,33,43,38,34,34,37,39,36,33,37,49,65,78,75,72,72,72,62,52,35,34,34,34,50,45,38,34,35,33,32,35,35,37,45,59,60,60,65,61,54,43,36,39,37,36,59,54,43,31,33,40,38,33,34,35,39,39,50,55,47,47,40,39,39,36,35,35,66,58,43,35,36,33,36,36,35,38,32,33,43,42,36,39,39,39,39,39,40,40,73,55,40,29,35,33,34,35,35,40,34,36,38,35,37,34,39,38,39,40,38,37,81,60,45,35,33,34,36,36,37,36,41,39,40,36,37,42,42,41,40,41,41,42,86,68,55,49,33,35,40,35,36,38,39,41,39,39,41,39,42,40,43,43,36,36,90,78,67,49,33,33,37,37,39,41,38,39,42,40,40,46,45,50,43,36,36,36,82,74,63,48,39,36,33,36,39,42,49,57,43,40,42,52,62,54,36,36,36,36,87,82,67,51,46,45,37,36,40,46,53,51,50,44,44,49,58,56,46,36,36,36,94,88,71,59,48,41,43,36,44,48,58,49,43,41,45,47,50,48,37,36,36,36,92,89,74,61,54,45,41,37,38,44,48,44,44,41,46,48,43,42,38,41,42,45,94,79,71,63,51,48,42,41,40,40,40,41,43,43,42,41,45,49,47,44,45,42,81,69,64,62,53,46,48,45,47,45,40,37,41,45,39,39,46,52,47,43,40,42,67,70,65,62,58,53,51,58,59,56,47,39,44,47,44,41,47,42,45,44,47,48,75,76,77,71,66,60,64,72,73,71,63,48,43,42,40,43,46,46,44,46,49,46,94,94,89,81,69,69,75,84,89,84,77,61,45,41,41,43,38,42,44,45,43,44,108,104,95,86,76,76,89,96,102,94,84,67,50,41,41,47,46,39,41,37,42,41,114,115,100,88,85,88,97,104,105,95,84,69,54,46,45,49,53,50,41,42,40,40,117,118,109,98,94,99,109,113,106,94,78,63,54,47,49,61,52,47,47,42,45,49,117,118,109,99,95,99,109,113,107,93,77,63,55,47,49,60,52,47,46,43,45,48],
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
