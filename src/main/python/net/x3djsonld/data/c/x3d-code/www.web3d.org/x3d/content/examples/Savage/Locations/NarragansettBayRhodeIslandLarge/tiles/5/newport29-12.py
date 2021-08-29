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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport29-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[101,104,107,108,110,109,108,109,111,108,106,107,107,107,104,99,100,100,103,102,99,98,109,108,108,114,113,111,110,110,103,103,105,104,104,100,96,93,99,97,96,94,87,85,116,111,109,112,116,114,110,105,99,100,100,101,99,94,91,94,91,93,90,82,72,71,112,107,109,109,110,110,108,101,96,96,99,96,92,89,85,85,85,81,81,74,79,80,110,109,108,104,107,104,100,93,92,94,92,91,84,85,84,83,78,71,77,82,90,91,109,107,102,104,99,101,96,89,91,89,82,80,78,81,83,80,73,74,78,88,95,96,106,104,104,101,96,92,88,91,89,79,82,79,76,76,75,77,78,84,88,94,107,107,109,101,100,98,95,87,86,86,86,86,84,86,87,81,76,75,82,92,94,106,104,105,102,103,101,96,96,89,86,86,86,86,88,89,93,89,83,80,90,90,99,103,107,107,96,96,95,95,86,86,86,86,86,86,87,93,95,89,87,91,94,87,100,105,102,102,92,89,93,86,86,86,89,90,89,90,92,95,97,90,90,92,81,93,97,94,90,89,97,97,96,89,88,89,95,96,95,100,96,95,95,87,82,80,81,86,79,79,71,71,103,98,97,100,102,104,100,99,107,105,102,96,83,80,77,77,77,75,76,67,63,61,108,106,99,105,104,109,108,109,107,110,103,95,84,85,80,78,67,69,69,53,51,51,113,111,113,111,113,112,110,111,112,104,101,87,84,76,75,69,73,66,52,51,46,46,112,119,127,123,118,105,107,110,107,103,90,85,75,71,70,63,54,58,53,55,49,49,120,124,124,120,117,113,113,110,101,92,85,74,65,65,54,53,55,56,52,54,53,51,125,127,128,127,122,120,115,103,92,82,69,64,61,60,55,53,49,53,53,45,46,45,126,128,127,118,122,112,106,98,86,78,69,62,61,55,55,53,50,50,50,50,44,44,127,128,119,118,112,108,95,87,77,73,66,66,61,54,54,60,59,51,53,50,50,50,121,118,113,114,103,96,86,81,73,70,67,70,67,63,58,54,53,53,55,61,59,59,115,112,117,110,98,85,78,73,77,73,77,74,64,63,61,52,49,52,59,64,68,67,107,108,107,103,97,90,79,74,74,75,80,71,65,59,56,57,53,50,58,70,78,78,107,106,106,101,96,89,80,75,75,76,79,69,66,60,58,56,53,50,57,71,78,79],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
