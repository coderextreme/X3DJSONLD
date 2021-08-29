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
        texture=ImageTexture(url=['../../images/5/newport11-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[51,49,48,49,48,43,44,40,43,45,43,43,41,41,43,39,33,28,34,34,34,34,48,45,44,44,41,40,45,46,43,41,40,40,39,38,38,36,32,28,30,32,34,34,45,41,43,44,41,42,43,45,46,46,45,43,42,39,37,35,33,34,31,30,28,29,44,42,46,48,49,49,47,45,50,52,51,49,47,45,39,36,37,35,31,28,28,29,50,50,50,52,54,56,55,53,55,56,57,55,51,47,42,39,40,37,33,30,31,32,54,54,53,54,56,59,58,58,58,59,59,56,52,49,45,43,41,43,36,31,37,39,53,54,56,55,55,56,57,60,58,61,61,60,54,50,45,46,43,48,43,32,40,41,53,52,53,52,52,51,53,61,60,58,56,55,45,46,47,49,49,49,43,34,38,39,48,47,48,48,47,45,47,52,53,53,50,47,42,44,47,48,44,41,40,42,42,41,44,43,44,43,41,39,42,43,44,46,45,44,41,39,40,42,41,45,46,45,43,42,48,44,40,37,33,34,38,37,37,38,40,41,39,36,35,40,45,49,51,49,43,43,48,43,38,35,33,32,33,32,34,36,37,33,35,33,34,40,46,48,50,47,42,42,45,43,39,34,34,33,34,33,34,34,35,32,33,29,35,38,41,45,45,43,36,36,43,42,38,34,32,32,26,27,27,29,28,30,31,29,28,28,32,35,35,35,33,34,44,43,37,32,30,30,28,28,27,27,26,27,26,22,21,22,21,20,24,22,26,28,42,41,36,35,35,33,29,30,28,26,23,21,20,19,18,18,16,13,14,13,18,19,36,38,35,34,34,32,30,27,25,22,22,24,21,19,19,18,12,11,13,12,15,16,31,31,31,32,31,27,26,29,28,26,23,20,18,18,17,17,13,11,11,11,12,12,26,26,31,34,35,28,26,29,30,31,24,17,17,17,17,18,15,13,11,11,13,13,24,28,29,29,30,28,25,22,22,22,20,17,15,14,11,12,11,12,11,11,11,11,20,25,27,27,23,23,23,20,18,15,13,14,14,11,11,11,11,14,11,11,11,11,22,24,23,22,20,19,18,17,16,13,12,12,13,12,13,15,15,16,14,11,11,11,17,20,20,20,20,18,16,14,11,10,17,16,14,13,14,14,17,17,14,11,11,11,17,20,19,20,19,18,15,13,11,10,17,16,14,13,14,14,17,17,14,11,11,11],
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
