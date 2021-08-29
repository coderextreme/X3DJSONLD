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
        texture=ImageTexture(url=['../../images/5/newport14-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[7,11,15,18,21,26,32,36,39,39,38,38,36,34,33,32,30,29,27,26,24,23,22,8,11,15,18,22,27,32,34,37,38,37,36,35,34,33,32,31,30,29,27,26,24,23,9,12,15,19,24,28,31,33,35,36,36,36,35,34,33,32,31,30,29,28,26,24,23,10,14,16,20,25,29,31,32,33,34,35,35,35,34,33,31,30,29,28,27,26,25,25,11,15,18,21,26,29,30,31,32,33,35,34,34,34,33,31,29,28,27,26,26,27,27,13,15,18,22,26,28,30,30,32,33,34,35,35,35,33,31,29,28,27,27,28,28,28,14,16,19,22,25,27,29,30,31,32,34,35,37,35,33,31,29,29,28,28,28,28,28,14,17,20,22,25,27,29,30,31,33,34,35,37,34,32,31,30,29,29,29,29,29,29,15,18,21,24,26,28,29,30,31,32,32,33,33,33,32,32,30,30,30,30,30,30,30,16,19,22,25,27,28,28,29,30,30,30,31,31,32,33,32,31,31,31,31,31,31,31,17,19,22,24,26,27,28,28,29,29,30,30,31,32,32,33,32,32,32,32,31,31,31,17,20,22,24,26,26,27,28,28,29,29,30,31,31,32,33,34,34,33,32,31,31,30,19,21,24,25,26,26,27,27,28,29,29,30,31,32,33,34,35,35,34,32,31,30,30,20,23,25,27,27,27,27,27,28,29,29,30,31,33,34,35,35,35,33,31,30,30,29,22,24,26,27,27,28,28,28,28,29,29,30,31,33,33,33,33,32,31,30,30,29,29,23,25,27,27,28,28,28,29,29,29,30,31,32,32,32,31,31,31,30,29,29,29,29,24,26,27,28,28,29,29,30,30,31,31,31,31,31,31,30,30,29,28,28,27,28,28,25,27,27,28,29,29,30,31,31,32,32,31,31,30,30,29,28,27,27,26,26,26,27,25,26,27,28,29,30,31,32,32,32,31,30,29,28,28,27,26,25,25,24,24,25,25,27,28,28,29,30,30,31,32,31,31,30,29,27,26,25,25,24,24,23,23,23,23,24,27,28,29,29,30,32,31,31,30,29,28,26,25,23,23,23,22,22,22,22,22,23,23,27,28,29,30,31,31,30,29,27,26,25,24,23,22,22,21,21,21,21,21,22,22,23,27,28,29,30,31,31,30,28,26,25,24,23,22,22,21,21,21,20,20,21,21,22,23],
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
