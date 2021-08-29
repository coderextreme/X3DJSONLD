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
        texture=ImageTexture(url=['../../images/5/newport16-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[43,44,44,45,45,45,45,45,43,41,39,37,34,30,27,23,20,17,15,12,7,2,0,44,45,45,45,46,46,46,45,44,42,40,38,35,32,28,25,22,19,16,13,9,3,1,45,46,46,46,46,46,46,46,44,42,41,39,36,32,29,26,24,21,18,14,10,4,2,45,46,46,46,46,46,46,46,45,43,41,40,37,34,31,29,26,23,21,16,11,5,2,46,47,46,46,46,46,46,46,45,44,42,41,38,36,35,32,28,24,20,16,11,6,3,46,46,46,46,46,46,46,46,45,44,43,41,39,38,36,33,28,24,20,17,14,10,7,47,47,47,46,46,46,46,46,45,44,43,41,40,39,37,34,30,27,24,21,17,12,10,47,47,47,47,47,47,47,47,46,45,44,42,41,40,38,36,33,29,25,22,19,14,11,47,47,47,47,48,48,48,48,47,46,45,43,42,41,39,37,34,30,26,22,18,14,12,47,47,47,48,48,48,49,49,48,47,46,45,43,41,40,38,35,31,28,24,20,16,14,48,47,48,48,49,49,49,49,49,48,46,45,43,42,41,39,35,32,29,25,21,17,15,48,48,48,49,49,49,49,49,49,48,46,45,44,42,41,39,35,32,29,25,21,18,15,48,48,49,49,49,49,49,49,49,47,46,45,44,43,41,39,36,33,30,26,23,19,17,49,49,49,50,49,49,49,49,49,47,47,46,45,43,42,40,37,34,31,28,25,20,17,49,49,49,50,50,50,50,49,49,48,47,46,45,44,42,41,38,35,33,29,25,21,19,49,49,50,51,50,50,50,50,49,48,47,47,46,44,43,41,39,36,34,30,26,22,21,49,50,51,51,51,50,50,50,49,48,48,47,46,45,43,42,40,37,34,31,27,23,21,50,51,51,51,51,51,51,50,49,48,48,47,46,45,44,42,40,38,35,32,28,24,22,51,51,52,52,52,51,51,50,49,49,48,47,46,45,44,42,41,38,35,32,27,24,22,52,52,52,52,52,51,51,50,49,49,48,47,46,44,43,42,41,37,34,30,25,22,20,53,53,53,52,52,51,51,50,49,48,47,46,45,44,43,41,40,37,34,30,25,21,19,53,53,53,52,51,51,50,50,49,48,47,46,44,43,42,41,39,36,34,31,26,22,20,54,53,53,52,51,51,50,50,49,48,47,45,44,43,42,41,39,37,34,31,26,21,20],
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
