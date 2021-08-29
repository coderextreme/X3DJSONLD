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
        texture=ImageTexture(url=['../../images/5/newport7-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.49458451554258,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[30,32,34,35,37,38,38,38,39,39,39,37,36,35,33,32,30,27,25,23,19,16,12,32,33,35,36,37,39,39,39,39,40,39,37,36,34,33,31,29,27,24,22,19,15,11,33,34,35,36,37,39,39,39,40,40,39,37,35,34,32,30,28,26,23,21,18,14,11,34,35,35,37,38,39,40,40,40,40,38,37,35,33,32,30,28,26,23,21,18,15,11,34,35,36,36,38,39,40,40,41,41,39,37,36,34,32,31,29,27,25,22,18,15,11,34,35,36,37,38,39,40,41,41,41,40,38,36,34,33,31,29,27,25,22,17,14,12,35,36,37,37,38,39,40,41,42,42,40,38,36,34,32,31,29,27,25,22,17,15,13,36,37,38,38,39,40,40,41,41,41,40,37,36,34,32,30,28,26,23,21,19,16,13,37,38,39,39,39,40,41,41,41,40,39,37,36,34,32,30,28,25,22,21,19,17,14,37,38,39,39,40,40,41,41,41,40,39,37,36,35,33,31,28,25,22,21,19,17,14,36,38,39,40,40,40,41,41,41,41,40,38,37,36,34,32,30,27,23,21,19,17,15,35,37,39,40,41,41,42,42,42,41,40,39,38,36,34,33,30,27,23,21,19,16,14,36,38,40,41,42,42,43,43,42,41,40,39,38,36,34,33,30,27,23,20,18,16,14,38,39,41,42,43,44,44,44,43,41,40,38,36,34,33,31,28,26,23,19,18,16,13,39,40,42,43,44,44,44,44,43,41,39,37,35,33,32,29,28,26,23,19,18,17,14,38,40,42,42,43,44,44,44,43,41,39,37,35,34,31,29,28,26,24,22,19,17,14,37,39,41,41,42,43,43,44,43,41,39,38,37,35,32,30,28,26,25,22,20,18,15,37,39,40,40,41,42,43,43,42,41,39,38,37,35,33,30,28,27,25,23,20,19,16,37,39,40,39,40,41,42,43,42,40,39,38,37,35,33,31,29,27,25,23,20,19,17,39,40,40,39,40,40,41,42,41,40,38,37,36,35,33,31,29,27,25,22,20,20,19,40,41,40,40,40,40,41,42,41,40,38,37,36,34,33,31,29,27,25,22,20,20,19,40,41,40,40,41,41,41,42,41,40,38,37,35,34,32,31,29,26,24,22,21,20,19,40,41,41,41,42,42,42,41,40,40,38,37,35,34,31,30,28,26,24,23,21,21,20],
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
