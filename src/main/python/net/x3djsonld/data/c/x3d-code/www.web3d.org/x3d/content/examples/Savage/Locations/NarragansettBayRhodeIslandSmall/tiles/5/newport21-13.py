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
        texture=ImageTexture(url=['../../images/5/newport21-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.32994244459235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[20,23,24,26,29,30,30,31,32,31,31,30,30,29,28,29,29,30,29,30,31,32,33,21,23,25,26,28,28,29,30,28,28,29,30,30,29,28,31,32,32,32,33,33,32,35,24,25,26,26,26,27,28,28,27,27,27,28,30,29,31,32,32,32,34,35,33,34,35,23,22,23,25,25,26,26,26,27,28,28,31,32,32,34,34,33,32,31,31,33,33,33,20,20,22,24,26,26,26,26,28,29,29,30,30,32,35,35,35,32,30,31,34,34,33,19,21,22,23,25,27,28,27,27,29,30,30,32,32,32,34,34,32,30,31,32,33,31,20,21,24,25,26,27,28,27,28,31,33,34,33,32,30,31,31,30,27,28,29,29,32,20,21,24,26,27,28,28,27,27,28,31,33,31,30,27,27,27,28,28,30,30,31,35,19,20,21,25,27,28,29,27,27,27,28,29,27,27,26,27,28,29,31,31,31,32,36,17,18,20,22,25,28,30,29,27,27,27,28,27,29,29,28,28,28,28,30,31,33,36,16,17,19,22,24,25,27,29,29,30,30,29,29,31,31,29,29,30,28,29,30,31,33,15,17,19,21,24,26,27,29,30,31,30,30,30,30,30,29,29,31,31,29,31,32,32,15,19,20,20,22,26,28,29,27,26,26,26,26,27,29,30,28,30,32,31,31,31,30,13,16,16,18,19,21,26,29,28,25,24,24,25,25,27,29,29,29,29,29,31,31,30,11,13,16,19,19,19,23,26,28,26,26,27,28,27,27,28,28,26,26,28,30,30,29,9,13,16,15,15,17,20,24,26,25,24,26,27,27,27,28,27,26,27,28,28,27,28,1,7,11,12,13,13,15,19,22,22,22,23,23,24,25,26,25,25,27,29,28,28,28,0,0,1,4,9,9,11,16,19,20,20,22,23,23,24,26,25,24,26,28,28,28,28,0,0,0,0,3,6,8,13,16,17,19,22,23,22,23,25,26,25,25,25,25,25,25,0,0,0,0,1,3,5,8,12,13,17,19,20,21,22,24,23,24,25,25,25,24,26,0,0,0,0,0,0,2,6,8,11,16,18,19,19,22,22,21,23,25,27,26,25,26,0,0,0,0,0,0,0,4,8,11,14,15,15,16,19,20,23,24,24,24,25,25,26,0,0,0,0,0,0,0,4,6,8,12,14,14,16,19,20,23,24,24,23,25,26,26],
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
