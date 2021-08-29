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
        texture=ImageTexture(url=['../../images/5/newport20-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[49,50,51,61,68,62,61,61,57,60,60,64,73,80,73,68,58,52,45,38,27,26,50,53,52,57,60,61,65,65,59,57,56,61,69,72,68,60,59,53,46,37,26,25,48,48,50,56,67,64,61,61,60,59,52,53,59,60,57,54,52,49,45,36,25,24,47,50,52,57,65,65,63,57,57,52,45,47,54,53,52,50,47,45,42,33,24,23,48,54,61,63,59,58,54,51,48,48,43,45,48,41,42,45,41,40,37,32,24,22,50,59,53,51,51,49,50,47,44,39,36,40,39,35,38,39,39,38,35,31,23,21,57,50,49,47,43,45,40,37,31,32,34,36,37,32,30,33,33,35,32,27,21,20,54,48,43,39,37,33,33,30,26,31,29,29,28,29,29,30,32,34,33,30,23,22,42,41,36,31,28,24,23,25,28,29,31,28,31,33,33,33,33,37,38,36,26,25,30,30,30,25,18,18,18,22,29,35,40,37,40,39,39,39,40,42,41,37,27,25,22,23,22,16,13,16,20,24,32,34,45,41,42,46,47,48,46,45,41,34,27,25,16,16,12,11,16,20,24,28,35,42,46,47,46,49,48,48,51,45,40,34,28,26,11,8,8,12,19,21,24,29,37,44,49,57,51,52,51,49,49,42,39,33,28,27,8,9,11,14,15,24,28,31,37,47,50,60,51,50,49,47,45,44,39,34,28,28,12,11,9,12,18,25,34,42,46,47,46,52,48,49,47,44,44,43,40,35,31,31,17,15,16,19,21,29,39,49,48,46,42,43,52,44,47,44,45,43,42,37,33,32,12,15,17,17,29,29,42,49,48,49,44,42,50,41,45,42,43,45,43,39,35,34,12,11,13,17,27,38,41,45,50,46,46,39,46,41,44,46,46,46,44,39,34,34,14,12,12,21,20,31,39,46,43,43,44,42,41,45,44,45,50,49,44,38,33,33,13,14,12,15,16,26,30,35,41,41,42,42,43,52,50,50,51,50,46,38,32,31,11,8,11,11,13,16,23,28,34,42,43,42,44,58,52,56,54,49,44,38,32,31,14,9,7,9,13,12,20,24,31,34,38,44,49,54,54,59,53,50,42,35,31,31,10,9,6,9,7,12,18,25,30,36,39,43,48,51,55,54,52,46,41,35,29,28,12,11,6,8,7,11,18,25,29,36,38,43,46,49,53,53,51,45,40,35,29,28],
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
