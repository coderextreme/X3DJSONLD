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
    GeoLOD(center=(41.86339110810791,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-12.x3d'],child2Url=['../../tiles/5/newport30-13.x3d'],child3Url=['../../tiles/5/newport31-12.x3d'],child4Url=['../../tiles/5/newport31-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[93,87,86,91,87,94,92,93,90,99,92,68,44,37,39,36,38,47,66,68,58,58,98,99,103,98,106,97,78,77,73,70,58,47,42,41,38,42,45,48,64,67,62,63,111,111,112,111,104,87,76,69,66,51,47,37,39,41,46,44,55,58,64,63,64,64,125,123,114,109,90,73,64,53,56,53,46,44,42,50,47,50,51,64,69,63,63,63,130,118,110,94,77,64,56,52,52,51,47,47,58,59,54,53,60,63,61,62,63,63,116,109,91,75,75,74,61,52,49,63,64,64,69,67,61,64,67,60,60,61,63,64,107,97,87,78,78,64,65,57,53,72,89,91,79,67,64,62,58,66,60,60,59,56,79,81,87,82,72,69,67,79,70,71,101,108,89,68,58,57,56,59,58,55,49,46,81,91,81,74,75,83,80,81,85,85,100,102,88,74,60,58,59,61,51,43,39,38,96,97,76,79,85,85,88,81,90,95,92,97,88,76,62,62,57,56,54,55,42,39,95,82,80,95,105,97,83,74,81,92,101,96,80,69,66,61,61,57,52,44,36,34,89,84,100,110,112,95,88,72,78,87,87,86,77,75,71,68,62,55,44,40,33,36,85,118,114,108,97,104,87,88,81,83,86,81,81,77,75,66,60,46,40,41,32,29,98,116,112,98,97,94,89,88,83,87,85,73,75,65,58,51,48,52,53,42,32,30,94,109,97,97,107,84,82,83,95,86,85,89,85,88,79,67,59,65,55,42,35,33,99,104,96,95,89,90,84,84,89,90,90,89,89,85,73,72,73,67,45,38,28,28,93,91,90,89,99,90,82,84,87,85,87,86,84,79,84,82,75,59,40,32,29,31,92,83,93,99,102,87,91,83,81,83,87,90,91,93,91,79,67,47,37,30,35,37,87,98,106,126,102,93,78,78,87,93,97,104,100,98,87,70,53,40,36,32,51,52,99,108,114,124,105,98,81,85,94,102,103,100,93,83,68,51,42,39,31,43,52,52,101,105,105,111,109,101,77,92,94,100,94,90,70,58,53,46,38,32,39,53,56,56,100,103,106,110,108,101,75,91,95,98,92,88,71,56,52,45,36,32,40,54,57,57],
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
