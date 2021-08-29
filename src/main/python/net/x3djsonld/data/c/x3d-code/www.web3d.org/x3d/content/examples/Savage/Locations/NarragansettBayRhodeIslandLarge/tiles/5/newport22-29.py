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
        texture=ImageTexture(url=['../../images/5/newport22-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[61,61,61,61,61,61,61,62,65,68,67,65,65,64,64,63,61,59,56,53,49,48,61,61,61,61,61,61,61,61,62,65,67,65,65,64,66,64,62,60,56,53,48,47,61,61,61,61,61,61,61,61,62,64,66,65,63,63,65,64,63,61,57,53,47,47,61,61,61,61,61,61,61,61,63,65,66,63,62,61,64,63,63,61,57,52,47,47,61,61,61,61,61,61,61,61,63,66,65,63,62,62,63,63,62,60,55,50,46,46,61,61,61,61,61,61,61,62,64,66,65,62,61,61,63,62,61,59,54,49,46,46,61,61,61,61,62,63,65,65,66,65,63,61,61,62,65,62,59,56,52,49,47,46,61,61,61,61,61,62,65,66,65,63,62,61,61,63,63,61,60,57,52,50,47,46,61,62,61,61,61,62,66,67,65,63,62,60,61,63,63,61,59,55,51,49,47,47,62,64,63,61,61,63,65,68,68,65,62,59,60,63,64,61,57,53,50,48,46,46,64,67,66,62,61,63,66,68,69,64,60,59,60,63,63,60,55,52,50,48,46,45,64,69,69,62,61,62,65,67,67,62,59,58,60,61,59,57,54,51,49,49,47,46,64,71,65,64,62,62,66,67,66,61,58,58,60,59,57,55,52,52,52,51,47,47,63,66,67,67,63,65,66,67,65,62,59,58,59,58,55,53,53,56,56,52,49,49,65,69,70,69,68,68,69,68,65,61,59,58,59,57,54,53,55,57,56,52,50,50,70,73,74,71,71,70,71,69,64,61,59,58,57,56,54,54,56,58,56,52,52,52,70,71,72,73,71,71,72,69,64,62,59,58,57,56,55,55,58,58,56,53,53,54,74,70,71,70,70,73,73,69,64,62,60,59,57,56,55,57,60,59,56,54,57,57,75,70,71,71,70,75,73,68,64,63,62,60,58,56,56,59,62,60,57,57,59,60,68,71,70,68,70,75,73,67,65,64,62,60,57,56,57,62,64,62,59,60,60,60,62,65,66,67,72,75,72,68,66,64,62,59,57,55,59,64,65,62,59,61,59,58,57,59,63,66,72,75,71,68,65,63,61,58,56,55,61,66,66,62,61,60,55,54,54,58,61,64,70,73,70,66,64,62,60,56,53,56,63,69,67,64,61,56,51,50,54,58,60,64,70,72,69,65,64,62,59,55,53,56,63,69,67,64,61,55,50,49],
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
