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
        texture=ImageTexture(url=['../../images/5/newport16-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[20,22,23,26,29,33,35,38,40,41,41,43,42,42,42,43,45,47,50,52,56,58,56,20,22,23,25,27,30,33,36,39,40,41,42,41,42,43,44,46,49,50,52,55,57,55,20,22,24,24,26,28,31,33,36,38,39,40,40,40,42,44,46,49,51,51,54,57,55,20,21,23,25,27,28,30,32,34,36,38,39,40,40,40,41,43,48,51,53,55,59,59,19,21,23,25,27,27,29,32,33,35,38,40,41,39,39,40,43,46,50,52,53,56,58,19,22,24,24,27,28,31,33,34,36,38,40,41,40,40,42,45,47,49,51,52,52,53,21,22,22,23,26,30,32,33,34,37,38,39,41,41,41,43,42,45,48,50,51,51,49,19,19,19,21,23,26,29,31,32,35,38,39,42,43,42,43,44,44,46,49,50,50,49,16,18,20,21,22,24,26,28,31,34,37,39,44,45,44,45,47,47,47,47,49,49,49,17,20,21,21,22,23,24,27,30,32,36,39,42,43,43,44,45,46,46,46,46,48,51,16,17,19,21,23,24,25,26,30,33,36,40,41,41,41,41,42,44,45,47,46,47,50,15,17,20,22,24,25,24,26,30,33,36,38,38,39,40,40,40,41,44,46,46,45,46,16,19,21,21,21,22,23,26,29,32,36,35,35,39,41,41,40,42,43,45,45,43,43,16,18,20,21,22,22,24,27,30,32,36,36,36,40,44,44,42,41,41,42,42,42,41,14,16,19,22,23,25,27,28,29,31,34,36,38,41,43,44,41,39,40,41,41,40,40,11,12,18,21,23,27,28,26,28,30,33,35,38,39,40,41,38,38,39,40,40,40,40,13,13,17,20,23,25,26,26,28,31,35,38,37,37,38,38,38,39,39,39,38,40,40,12,14,16,20,22,25,28,29,29,30,36,38,39,37,36,35,36,38,40,40,38,38,37,12,15,16,19,23,26,27,28,28,30,36,38,42,40,35,31,32,35,38,40,40,38,35,14,16,18,21,22,24,26,28,28,31,34,34,34,34,33,30,30,33,34,34,33,33,32,14,15,17,20,22,23,27,30,31,31,31,31,31,32,32,31,31,31,31,31,32,31,29,12,14,16,18,21,23,26,29,31,30,29,29,30,30,30,30,30,30,30,31,32,28,21,11,13,16,18,21,23,26,27,29,30,30,29,29,29,29,29,30,29,29,30,30,23,14],
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
