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
        texture=ImageTexture(url=['../../images/5/newport17-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.57529309331769,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[54,53,53,52,51,51,50,50,49,48,47,45,44,43,42,41,39,37,34,31,26,21,20,54,53,53,52,52,51,50,50,49,48,46,45,44,42,42,40,39,37,34,30,26,22,21,54,53,53,52,52,51,50,50,48,47,46,45,43,42,41,40,38,36,33,30,27,23,21,54,53,53,52,51,51,50,49,48,46,45,44,43,42,41,39,38,36,34,31,27,23,21,54,53,53,52,51,51,50,49,48,46,45,44,42,41,40,39,38,36,34,31,27,22,21,53,52,52,51,51,50,50,49,48,46,45,43,42,40,39,38,37,35,33,30,26,22,20,53,52,51,51,50,49,49,48,47,46,44,43,42,40,38,37,35,34,32,28,25,21,19,53,52,51,50,49,49,48,47,46,45,44,43,41,40,38,36,34,32,30,27,23,20,18,53,52,51,50,49,48,47,46,45,44,43,42,41,39,37,35,33,30,27,24,20,16,14,53,52,51,50,49,47,46,44,43,43,42,41,40,38,35,32,29,26,25,22,21,19,17,52,51,51,50,49,47,46,44,42,42,41,40,37,35,32,31,30,29,28,27,24,20,17,53,51,50,50,49,47,45,44,42,41,40,38,36,35,34,33,32,31,29,27,23,18,16,53,52,50,49,48,46,45,44,42,41,40,39,38,37,36,34,32,30,28,25,21,16,14,53,52,51,50,49,47,46,45,43,41,41,40,39,37,36,35,32,29,26,24,20,15,13,54,52,51,50,49,48,46,45,43,42,41,39,38,37,36,34,32,29,26,23,20,14,12,54,53,52,50,49,48,46,45,43,41,40,39,37,36,35,33,31,28,24,21,18,13,12,54,53,52,51,49,48,46,44,42,41,39,38,36,35,34,33,30,27,23,19,15,12,10,54,53,52,50,49,47,45,43,42,40,38,36,35,32,32,31,28,25,22,18,14,11,9,53,52,51,50,48,47,45,43,41,39,37,35,32,30,28,27,25,23,20,17,13,9,7,53,52,51,49,48,46,45,43,41,39,36,35,33,30,28,24,21,19,17,14,11,8,5,53,51,50,49,47,46,44,42,40,37,35,33,32,30,28,25,22,19,16,12,8,5,3,53,51,50,48,47,45,43,41,39,36,34,32,30,28,26,25,22,19,16,12,6,3,2,53,51,50,49,47,45,43,40,38,36,33,31,29,27,25,24,22,19,16,12,6,2,1],
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
