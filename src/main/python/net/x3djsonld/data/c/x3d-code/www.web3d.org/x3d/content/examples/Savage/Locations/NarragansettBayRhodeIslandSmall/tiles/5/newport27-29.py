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
        texture=ImageTexture(url=['../../images/5/newport27-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.20080872015217,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[24,25,27,28,34,38,40,41,43,44,46,49,54,58,58,60,63,65,67,69,69,68,68,25,27,30,28,31,36,39,41,43,45,47,51,56,59,62,64,66,68,70,71,71,70,70,26,25,26,27,29,35,40,42,44,45,47,52,56,61,64,66,68,71,73,74,74,73,73,24,25,28,31,34,38,42,44,45,46,48,53,58,62,65,68,71,74,75,77,76,75,75,23,26,27,31,36,41,44,45,46,46,48,54,58,62,65,69,72,75,77,77,77,76,77,22,26,26,29,37,42,45,46,47,47,49,54,58,62,65,69,72,74,75,76,76,76,76,20,23,23,27,39,43,45,46,48,48,50,53,57,61,65,68,70,72,74,74,75,75,76,19,20,20,26,39,43,44,46,48,49,50,53,56,60,63,66,68,70,72,73,74,74,75,20,24,28,32,39,43,46,48,50,50,51,53,56,58,62,64,66,68,71,72,73,73,74,19,23,28,33,39,44,48,50,51,52,53,54,56,58,61,63,65,67,69,70,72,73,73,18,22,28,35,41,46,48,51,53,54,55,55,56,58,60,61,63,66,68,70,71,72,73,20,24,30,38,44,47,49,53,56,57,57,58,58,58,59,61,63,65,67,69,70,71,73,19,24,31,39,45,47,51,56,58,58,59,60,60,60,60,62,63,65,67,68,70,71,72,18,23,32,40,46,48,52,57,59,59,60,61,62,62,61,62,64,66,67,69,70,72,72,18,23,33,40,46,49,52,58,60,62,62,63,63,63,63,63,65,66,67,69,71,72,72,18,23,32,40,47,50,53,57,61,63,64,65,65,65,65,65,65,66,67,69,70,71,72,17,21,30,39,46,50,54,58,61,64,65,66,66,67,67,66,66,67,67,68,69,70,71,15,21,28,36,44,49,53,57,61,64,65,66,67,68,68,68,68,68,67,68,68,70,71,14,20,26,33,41,47,52,56,61,63,65,66,67,68,68,69,69,69,69,69,70,70,71,16,21,26,32,37,43,50,54,58,61,64,65,66,67,68,69,69,69,69,70,70,70,70,16,21,26,31,35,41,46,51,54,58,62,64,65,66,68,69,69,69,69,69,70,69,69,15,19,24,29,34,39,44,48,52,56,60,63,64,66,67,68,68,68,69,69,69,69,68,14,18,23,28,33,38,43,47,51,55,60,62,64,65,66,67,67,68,68,68,68,68,67],
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
