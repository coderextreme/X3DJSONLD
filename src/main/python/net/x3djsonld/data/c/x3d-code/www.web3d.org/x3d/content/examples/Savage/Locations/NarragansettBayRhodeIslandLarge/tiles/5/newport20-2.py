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
        texture=ImageTexture(url=['../../images/5/newport20-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[87,80,71,65,55,57,54,53,53,49,44,45,43,45,49,57,61,62,61,64,67,68,83,73,69,59,53,47,47,47,46,45,47,50,55,54,55,51,55,62,61,64,64,64,78,68,66,59,49,48,49,42,47,50,50,52,54,53,54,51,47,51,60,65,65,65,74,65,57,51,51,48,46,46,50,50,54,49,51,52,55,52,53,52,56,61,64,62,70,59,57,50,49,49,46,56,55,49,53,54,53,56,58,59,58,53,54,55,56,55,66,55,54,53,54,51,47,54,51,49,51,57,58,62,62,60,61,60,56,49,49,49,67,59,54,52,50,49,50,49,52,57,62,65,67,69,69,71,66,61,56,51,53,54,59,64,57,52,52,49,55,51,55,65,68,76,77,82,86,83,73,63,56,56,55,57,60,62,61,55,53,56,55,61,65,66,73,79,92,100,100,89,77,72,68,58,56,56,62,65,64,58,57,62,63,68,69,74,83,91,107,112,97,91,86,70,60,62,64,63,63,67,63,64,67,66,67,70,80,88,97,102,99,96,94,92,83,74,61,59,63,63,67,65,64,72,69,70,75,81,91,92,96,102,100,100,91,87,72,66,60,54,58,59,65,65,72,76,70,79,84,85,96,99,99,95,95,91,92,74,71,64,63,57,60,60,66,68,75,74,76,80,86,94,98,107,101,102,94,93,86,73,62,61,60,61,62,63,75,74,71,76,83,92,95,101,99,102,109,110,100,85,76,65,62,57,56,58,61,61,80,77,76,79,89,96,100,104,108,115,111,103,98,82,69,66,64,57,60,56,58,59,80,79,83,88,102,103,108,107,110,109,110,106,93,82,73,62,58,60,59,59,61,61,79,85,96,101,106,112,117,117,107,110,104,98,97,82,71,65,60,60,58,62,63,64,88,93,102,109,112,118,123,119,110,110,107,98,91,85,70,62,61,60,62,65,64,63,97,106,112,118,121,124,125,121,114,107,106,93,86,78,73,67,69,63,65,71,70,69,102,110,113,126,128,129,127,123,114,104,100,93,88,80,76,68,64,66,68,68,67,68,103,106,115,127,134,135,129,121,114,110,103,93,83,72,70,68,70,64,68,70,77,77,101,108,116,130,135,136,128,126,115,109,99,86,77,75,71,72,75,68,69,74,77,78,101,107,117,128,135,135,128,127,115,108,100,87,76,76,72,71,77,67,68,74,78,80],
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
