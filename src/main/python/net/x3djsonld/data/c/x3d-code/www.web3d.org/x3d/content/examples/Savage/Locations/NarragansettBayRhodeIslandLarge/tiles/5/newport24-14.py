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
        texture=ImageTexture(url=['../../images/5/newport24-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[46,41,37,34,40,39,40,40,41,46,52,55,57,57,54,53,48,44,41,37,32,31,43,38,35,35,37,36,39,41,44,50,54,59,62,61,59,58,48,42,36,32,27,25,40,34,33,36,37,38,38,41,46,52,57,63,64,61,62,58,50,42,34,26,21,20,37,32,32,35,33,36,35,43,48,57,61,65,65,64,59,53,48,39,31,24,18,17,31,30,32,29,28,32,36,43,51,56,61,61,62,61,59,51,43,32,23,17,16,16,29,28,27,28,28,34,40,44,47,49,55,57,58,57,52,42,34,29,22,16,13,12,28,30,33,31,28,36,44,45,42,42,42,42,45,43,37,31,28,23,20,14,11,11,34,36,34,38,34,32,34,33,36,36,36,36,32,27,24,24,21,19,16,15,10,10,38,41,39,38,40,32,28,30,33,32,26,24,22,21,20,21,18,18,17,15,10,9,43,42,42,38,35,35,32,28,29,29,28,23,22,20,19,21,21,20,19,12,10,9,46,47,47,47,47,46,40,33,30,27,28,27,29,24,23,21,27,21,17,14,10,9,53,52,53,53,48,42,39,33,30,29,31,27,26,27,28,27,24,21,20,18,13,13,53,50,51,51,44,39,35,35,31,32,33,30,30,30,30,27,27,24,20,17,12,12,57,54,54,49,45,36,34,30,32,33,31,35,29,27,28,27,24,22,17,16,12,11,65,56,51,46,39,33,33,30,32,30,30,40,32,28,27,22,18,15,16,15,12,11,74,65,53,41,35,37,33,33,34,30,29,37,39,37,32,24,18,15,15,14,15,15,69,62,52,41,38,38,39,45,37,34,35,32,41,40,33,26,21,17,17,18,18,16,61,57,42,37,37,39,45,52,47,42,40,34,39,36,28,24,21,20,21,20,18,18,50,43,38,36,39,39,42,46,52,53,48,35,30,25,23,21,17,19,17,17,17,16,40,39,37,37,40,42,40,41,45,53,53,38,28,22,22,18,16,16,17,18,19,18,37,38,38,40,43,45,45,43,42,43,41,33,25,23,16,16,19,16,15,15,16,16,40,42,42,45,46,48,47,44,43,37,35,29,24,20,15,14,16,14,14,18,24,23,43,43,49,54,54,51,50,46,44,38,31,27,20,21,14,13,15,14,16,22,27,26,42,43,49,57,57,52,52,48,45,39,30,27,20,20,14,14,15,15,16,21,28,27],
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
