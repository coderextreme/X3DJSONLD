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
        texture=ImageTexture(url=['../../images/5/newport19-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[73,71,71,69,73,72,67,68,67,64,65,63,62,75,83,79,61,57,56,54,47,48,69,68,73,71,67,71,67,68,65,65,62,65,76,95,95,80,57,51,50,43,39,39,70,68,70,70,67,69,66,65,65,62,78,89,90,93,90,76,53,48,47,42,41,40,72,68,64,70,73,69,65,65,64,72,81,88,98,102,97,73,57,49,43,41,43,42,65,70,69,67,65,67,69,69,73,82,88,100,111,98,86,70,64,53,50,49,53,53,65,67,66,67,66,70,77,80,86,94,98,106,116,106,90,80,75,66,59,56,57,57,65,66,62,65,74,77,86,94,106,115,120,118,113,107,98,91,85,77,69,64,62,61,67,68,68,72,77,84,101,109,116,123,129,136,130,129,123,112,95,79,73,63,58,59,78,73,73,80,89,102,111,121,127,132,134,137,135,133,122,117,104,95,78,67,55,53,80,77,88,93,105,114,120,130,134,135,134,130,129,124,126,115,108,91,72,61,55,55,83,88,96,108,118,127,132,135,140,138,125,126,126,119,118,111,100,83,74,64,59,58,87,100,106,115,120,131,141,139,135,133,126,127,119,114,110,101,88,76,67,59,57,57,91,101,113,124,133,135,136,133,128,124,120,112,109,102,97,88,78,67,60,55,49,48,95,107,123,131,136,139,134,130,119,110,106,100,92,89,82,75,67,56,49,44,45,46,96,113,125,134,140,132,129,124,109,98,95,88,82,75,63,59,54,53,46,46,45,45,104,120,128,135,133,122,122,111,96,93,81,80,66,65,57,56,48,44,47,55,54,54,113,126,125,128,124,114,105,97,88,76,66,61,54,49,50,44,43,44,54,53,54,54,116,121,120,114,108,105,96,82,75,68,61,47,49,43,42,40,47,56,55,55,58,58,115,112,114,111,100,89,77,71,65,56,52,43,42,42,40,48,52,56,56,58,61,62,106,108,100,96,89,77,67,61,54,52,44,44,44,50,52,53,57,55,59,59,59,60,103,96,89,82,71,65,56,57,52,53,47,47,43,44,44,49,57,59,61,62,63,63,93,91,83,74,60,57,52,50,53,49,48,45,45,47,44,53,57,61,62,65,65,65,88,82,74,66,54,58,55,53,55,47,46,44,43,43,48,57,61,63,61,65,66,66,87,80,71,65,55,57,54,53,53,49,44,45,43,45,49,57,61,62,61,64,67,68],
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
