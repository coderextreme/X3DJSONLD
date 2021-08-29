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
        texture=ImageTexture(url=['../../images/5/newport17-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[99,95,92,92,92,92,92,90,87,83,81,81,82,81,83,84,84,82,75,76,70,69,104,100,98,96,93,94,93,91,86,83,80,78,77,77,76,78,77,75,70,67,67,67,106,101,97,95,97,97,95,91,89,84,81,77,72,70,73,72,69,65,67,66,65,66,104,100,99,98,99,101,102,98,90,83,79,75,74,73,71,66,66,63,67,65,66,66,102,100,99,101,102,99,93,93,92,85,80,77,74,74,70,66,64,66,69,69,64,63,104,100,101,102,99,94,96,92,88,83,78,75,77,73,72,71,70,72,74,72,70,70,109,108,106,103,101,98,94,88,86,88,83,82,77,73,74,77,78,78,75,77,73,73,115,114,111,106,103,101,97,92,87,86,83,82,79,80,84,85,86,86,81,78,75,74,120,117,113,106,102,99,95,92,88,86,87,87,86,88,90,92,92,89,85,86,80,79,119,117,113,107,105,99,94,90,89,91,94,96,96,95,89,90,94,93,89,86,75,73,115,112,110,108,105,102,96,92,94,98,96,97,95,94,92,91,89,89,84,74,70,70,113,109,108,107,103,98,95,96,96,95,101,99,98,96,98,95,89,82,77,70,67,67,113,111,106,101,101,97,97,101,100,100,101,102,100,98,97,91,80,71,67,62,59,58,115,112,107,104,103,101,101,104,104,101,100,102,101,100,93,81,70,62,56,53,52,52,112,112,110,106,105,104,105,109,107,104,103,100,101,96,82,69,61,54,46,51,51,52,108,109,108,109,109,113,114,109,107,106,105,106,98,82,69,60,54,52,51,52,52,54,106,108,112,112,115,121,116,107,105,106,102,93,83,71,63,56,51,51,58,56,55,54,104,106,111,118,119,117,115,110,105,98,88,77,68,64,59,59,57,60,59,56,62,60,106,109,115,117,114,116,112,105,96,85,75,71,66,58,59,58,60,61,63,63,66,66,111,113,113,115,117,113,105,95,84,74,68,64,61,60,62,64,64,66,65,66,70,71,112,111,114,118,115,107,96,85,75,68,65,62,64,68,68,68,71,71,67,70,76,76,117,114,115,116,109,99,87,77,70,66,64,69,70,71,74,77,79,75,74,76,80,81,119,121,119,109,98,87,78,73,70,69,71,73,75,81,84,85,83,82,80,81,83,83,119,123,118,107,97,85,77,73,72,71,73,73,76,82,85,85,83,82,83,83,83,83],
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
