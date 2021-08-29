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
        texture=ImageTexture(url=['../../images/5/newport11-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[14,7,5,7,12,22,31,42,48,50,52,49,44,41,44,46,48,48,49,50,51,51,14,11,7,10,13,18,26,36,45,51,50,52,51,49,49,50,50,50,50,49,48,48,12,10,11,11,13,16,22,30,39,45,44,51,53,53,52,53,51,51,50,49,46,45,14,13,9,11,11,11,18,25,32,42,48,47,49,54,54,52,51,50,49,47,44,44,19,20,23,19,15,13,15,19,25,33,42,47,49,53,57,58,59,56,50,51,50,50,16,18,22,18,14,15,15,16,21,29,38,43,47,51,54,60,60,57,55,55,54,54,14,15,16,15,14,16,12,15,17,24,33,40,47,48,53,57,56,55,58,54,53,53,15,13,14,16,17,14,16,15,16,19,28,36,42,47,51,52,49,52,54,54,53,53,14,14,15,19,21,17,18,19,17,17,22,27,33,41,45,46,50,51,51,50,48,48,14,15,17,20,24,19,16,14,17,17,22,27,30,36,40,40,44,45,45,44,44,44,13,15,17,18,22,20,17,17,17,16,20,24,28,32,33,34,40,43,44,45,47,48,20,16,16,15,16,16,17,18,22,23,21,23,25,26,27,29,36,41,46,49,49,48,39,34,27,18,14,16,21,24,29,29,25,23,22,21,23,30,37,42,46,49,46,45,48,39,24,15,16,16,20,28,34,30,24,21,21,21,25,28,31,37,42,44,44,43,40,31,20,13,14,18,18,26,30,28,23,18,18,18,23,25,26,31,36,41,43,44,28,20,16,12,11,14,16,20,25,25,21,17,17,17,17,19,21,24,29,38,41,42,18,15,13,11,11,14,15,14,17,23,20,15,12,13,13,13,15,17,20,29,36,36,14,11,10,9,9,10,16,19,18,18,15,14,11,11,13,11,12,15,19,24,30,31,12,10,11,10,10,13,18,21,23,19,16,13,9,9,9,11,11,12,17,20,25,26,8,10,13,13,11,13,18,21,21,22,21,16,11,10,10,10,11,13,16,17,24,24,9,8,9,15,13,16,21,25,25,25,23,18,12,12,16,14,12,14,15,18,20,20,8,10,12,11,16,18,19,20,21,21,21,21,17,16,11,12,14,17,16,17,21,22,11,13,10,9,13,15,14,14,17,19,18,19,20,16,13,12,13,13,16,17,17,17,12,13,10,8,13,14,13,13,17,19,18,19,20,15,13,12,13,13,16,17,17,17],
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
