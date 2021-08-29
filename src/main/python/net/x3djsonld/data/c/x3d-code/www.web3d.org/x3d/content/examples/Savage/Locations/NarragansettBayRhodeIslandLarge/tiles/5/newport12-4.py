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
        texture=ImageTexture(url=['../../images/5/newport12-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[27,28,36,40,44,48,46,40,36,33,36,39,40,45,46,50,49,46,50,45,42,42,38,36,40,42,46,51,50,43,37,36,38,39,42,44,52,53,56,53,52,47,42,42,45,47,47,48,49,48,50,50,45,41,45,48,43,44,50,53,57,59,56,51,45,44,52,53,52,51,48,51,55,57,54,48,50,56,52,53,55,47,51,53,53,48,44,43,52,54,54,55,56,58,59,57,54,57,50,55,59,58,58,51,50,49,47,40,37,37,48,50,54,56,57,58,58,60,59,60,53,52,54,55,55,57,56,51,46,36,31,31,46,49,53,55,57,59,60,63,62,63,59,56,58,56,53,54,54,48,42,37,33,32,47,51,58,60,62,64,63,66,67,66,61,58,56,55,53,49,47,41,39,37,32,32,52,54,60,64,68,66,66,68,65,64,62,57,48,47,47,42,41,37,34,30,27,27,52,60,61,64,67,68,67,64,59,58,55,51,41,37,37,32,29,27,25,24,23,22,47,58,61,62,62,63,64,62,58,54,51,48,42,36,35,24,16,16,16,16,16,16,48,49,55,57,53,55,58,59,56,51,51,52,48,40,39,25,20,16,16,16,16,16,51,40,43,44,45,49,55,54,51,48,50,54,44,39,40,32,21,16,16,16,16,16,44,30,31,34,38,41,48,47,43,46,47,48,43,39,39,36,25,19,16,16,16,16,38,28,28,28,32,35,37,37,38,42,44,46,46,45,42,41,28,18,16,16,16,16,42,32,30,30,29,30,32,31,34,37,41,45,47,47,45,43,30,18,16,16,16,16,45,35,32,32,27,24,26,28,32,38,42,45,45,46,44,40,32,18,16,16,16,16,44,42,39,31,27,24,24,28,32,40,43,44,43,42,38,31,27,16,16,16,16,16,51,52,43,32,27,24,26,30,33,36,39,40,38,33,28,20,18,16,16,16,16,16,55,52,41,33,26,25,27,31,33,34,34,33,29,25,17,16,16,17,16,16,16,16,56,51,42,33,25,23,26,30,32,31,29,25,21,17,14,14,15,16,16,16,16,16,55,50,40,31,25,22,23,26,26,25,22,18,16,13,12,13,14,15,16,17,15,16,52,48,38,30,26,22,20,20,20,18,17,15,15,13,13,15,16,16,16,15,15,15,51,47,38,30,26,22,19,19,19,17,16,14,15,14,13,16,16,16,16,15,15,15],
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
