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
        texture=ImageTexture(url=['../../images/5/newport30-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[20,23,24,24,22,21,18,7,2,4,20,35,50,58,54,49,44,44,44,44,46,46,24,24,24,24,22,19,15,5,2,7,23,38,50,55,52,46,45,45,46,48,51,51,23,24,24,23,22,20,13,9,4,11,23,36,46,48,46,43,44,45,49,52,54,54,24,24,24,22,21,17,14,13,7,10,24,31,37,39,41,44,45,46,50,54,55,55,24,23,18,13,11,8,8,7,6,10,20,26,29,32,36,41,44,49,52,55,55,55,19,17,8,7,7,7,10,8,5,9,16,22,27,31,35,39,46,50,54,59,57,56,8,7,7,7,9,11,18,16,10,9,16,19,26,30,36,42,48,53,58,60,57,56,9,8,8,8,12,15,19,20,15,7,14,18,25,30,36,45,50,56,59,59,56,55,11,9,9,9,11,17,16,15,15,8,7,13,20,26,34,43,51,56,59,60,56,55,9,8,8,8,10,12,15,12,9,5,7,11,16,23,33,41,52,56,59,58,54,53,8,7,8,8,9,10,13,12,6,6,8,12,14,19,28,42,51,56,58,56,51,50,11,9,8,8,8,8,8,8,7,6,12,13,16,18,26,40,49,56,57,55,50,49,10,9,9,8,8,8,6,5,11,5,12,18,20,17,23,36,49,54,55,53,50,50,10,10,12,9,9,11,9,8,6,11,9,21,21,21,22,31,38,44,50,51,49,49,10,13,19,17,15,19,10,9,8,12,11,17,22,22,23,25,31,34,39,43,45,46,12,18,23,23,22,22,11,10,9,11,8,19,20,20,22,23,26,29,34,41,45,45,15,21,22,24,24,24,19,12,11,9,8,10,6,12,19,19,22,26,30,38,44,45,18,20,17,19,20,20,17,14,12,8,8,8,4,7,11,13,18,23,29,38,42,43,20,20,17,17,16,16,15,14,13,11,8,8,9,9,10,12,17,20,27,37,41,41,22,23,24,20,19,20,21,17,13,12,11,8,8,9,9,10,17,22,25,35,40,41,25,29,30,27,27,26,25,22,14,13,12,11,8,8,8,8,10,23,25,32,39,39,29,37,36,32,29,29,26,22,16,14,13,14,12,11,10,8,13,22,26,31,38,39,34,41,42,36,32,29,26,19,17,15,13,14,15,15,11,7,8,14,27,29,36,37,35,43,44,36,32,29,25,18,17,16,13,14,15,15,11,7,8,13,25,29,36,37],
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
