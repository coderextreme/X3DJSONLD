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
    GeoLOD(center=(41.52473004175595,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-6.x3d'],child2Url=['../../tiles/5/newport16-7.x3d'],child3Url=['../../tiles/5/newport17-6.x3d'],child4Url=['../../tiles/5/newport17-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[43,45,41,43,43,43,44,58,67,76,71,52,44,43,33,37,36,39,42,44,43,42,38,42,45,43,43,43,55,74,84,84,81,74,44,38,37,35,38,41,46,47,44,43,37,43,51,49,49,46,58,76,83,77,64,54,38,39,36,37,38,44,44,43,49,50,40,45,53,61,53,45,52,68,67,63,49,47,42,39,36,41,45,49,51,53,59,59,44,47,53,62,55,50,55,48,50,48,46,46,40,36,44,48,50,61,65,73,69,66,55,63,62,53,57,52,43,44,50,52,45,39,42,47,52,54,64,68,82,86,77,73,52,57,55,55,56,55,52,47,48,40,41,42,55,58,62,66,78,87,94,97,85,81,43,49,52,52,50,54,51,44,42,39,44,47,54,58,67,71,87,99,106,103,91,86,44,53,56,50,50,53,45,50,40,41,48,55,59,59,64,76,91,103,106,102,93,90,55,67,61,54,49,54,56,51,47,50,59,72,76,76,76,83,95,100,101,93,84,82,81,79,71,57,59,51,55,57,48,53,66,79,83,90,90,89,89,89,90,94,88,87,83,81,76,67,56,48,57,51,47,53,76,88,96,97,96,91,83,86,88,94,95,94,78,76,78,69,64,55,51,57,56,55,81,96,93,98,92,85,84,82,85,93,95,92,84,85,79,77,67,57,58,63,62,58,79,102,93,91,89,76,75,78,85,96,96,94,85,90,98,87,72,72,78,69,66,70,81,100,98,93,84,80,73,74,91,92,83,81,101,103,95,89,83,85,84,83,74,75,79,103,105,94,90,84,78,77,73,70,69,67,104,103,100,93,84,82,84,88,83,70,90,100,101,95,89,84,79,72,68,71,74,75,102,106,112,102,102,95,90,82,73,73,86,96,104,94,87,80,77,75,73,78,90,94,100,104,113,115,108,103,98,85,77,75,83,96,100,93,88,86,77,76,74,87,106,108,106,114,121,122,124,114,100,92,85,76,83,98,95,89,86,82,79,78,77,96,113,114,124,121,128,138,138,132,112,95,83,74,86,103,100,99,94,91,87,82,83,98,117,117,126,122,129,137,138,131,113,92,83,75,86,104,101,99,95,93,89,82,83,98,117,117],
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
