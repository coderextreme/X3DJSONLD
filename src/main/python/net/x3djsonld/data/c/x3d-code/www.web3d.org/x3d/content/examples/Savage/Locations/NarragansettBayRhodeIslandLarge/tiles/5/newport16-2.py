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
        texture=ImageTexture(url=['../../images/5/newport16-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[44,50,58,63,74,81,85,88,86,83,85,88,91,92,93,90,88,80,73,64,58,57,47,51,59,68,77,83,87,90,91,94,92,92,93,93,95,95,92,84,75,67,59,59,48,51,59,73,81,86,92,96,98,98,95,96,99,102,98,98,93,88,78,70,62,61,50,55,65,78,85,91,94,101,103,102,103,102,103,105,99,98,94,90,79,71,65,64,53,61,69,79,89,97,97,107,111,109,103,104,103,104,104,102,96,91,79,69,62,61,59,60,70,80,88,101,103,109,114,112,106,107,107,104,105,101,93,86,80,72,64,63,54,62,73,79,91,102,108,112,116,112,107,109,109,105,102,98,95,87,81,73,71,70,59,66,73,82,96,105,114,109,110,111,110,113,112,105,104,96,92,86,81,78,72,71,73,72,73,85,98,107,111,111,111,106,115,115,112,109,103,96,89,86,86,78,74,73,63,71,79,88,100,102,111,114,113,113,117,113,115,107,101,96,94,84,79,75,71,71,63,70,81,93,100,110,107,114,116,118,117,115,114,107,105,92,87,84,75,75,67,66,65,73,86,90,97,107,109,113,118,122,118,115,110,110,99,95,86,74,69,68,64,64,64,74,80,83,97,105,104,112,119,118,118,118,111,108,100,91,82,73,69,61,59,58,72,75,84,88,90,100,102,112,117,116,117,112,107,104,93,87,81,74,67,66,60,58,63,73,85,90,89,99,103,112,113,117,110,111,107,101,100,88,76,72,69,62,56,56,71,70,83,89,93,99,103,112,110,117,113,105,103,102,97,91,80,71,65,56,59,58,79,84,87,92,101,105,110,113,111,115,114,115,100,95,88,81,74,66,63,63,51,51,83,87,85,87,96,104,106,113,111,113,113,110,96,89,81,76,73,69,61,50,44,43,85,85,88,92,94,97,98,107,109,110,108,99,88,81,76,70,68,61,51,45,50,52,81,81,83,83,87,89,96,100,105,105,100,92,83,81,74,65,60,58,48,41,37,36,83,79,77,76,74,80,88,90,94,94,92,91,85,81,69,68,57,43,41,36,32,31,77,80,72,73,70,71,75,81,85,88,86,80,75,73,65,54,46,40,33,31,31,31,70,72,64,67,65,69,73,74,79,73,76,76,77,68,58,48,39,34,34,33,32,33,69,70,64,66,64,68,71,74,78,73,76,74,74,66,56,47,39,34,32,35,31,32],
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
