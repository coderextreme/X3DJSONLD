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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[35,30,34,45,53,46,43,32,47,45,47,45,45,36,46,49,47,47,46,43,39,41,40,39,46,37,52,42,39,45,43,45,50,52,41,37,43,41,43,49,46,46,42,40,39,41,40,42,45,49,44,45,45,46,33,36,46,41,45,38,43,45,44,45,46,44,36,39,45,43,48,57,52,44,40,43,46,38,41,38,35,36,39,42,44,43,43,42,43,47,48,53,46,46,47,38,43,43,45,45,44,44,36,37,41,43,42,37,47,47,47,51,47,50,51,47,44,36,43,49,46,50,41,42,33,46,37,36,46,41,36,44,51,47,45,42,51,39,42,43,45,50,44,45,41,44,48,43,42,36,41,37,46,41,43,42,44,50,48,44,38,44,43,52,46,42,38,42,46,45,46,41,41,31,37,46,54,47,46,46,49,40,43,46,44,46,44,45,50,47,48,41,46,34,35,42,33,33,54,49,53,51,50,49,42,46,43,46,54,44,50,46,45,48,40,45,45,44,31,29,56,47,52,53,50,43,50,49,44,48,45,46,53,43,43,44,46,40,42,49,42,36,51,50,51,50,52,53,46,44,48,45,45,49,50,43,42,46,44,45,45,46,43,45,51,51,50,54,54,45,44,51,55,46,44,43,42,40,35,36,39,39,44,43,39,40,53,50,45,50,50,43,50,37,44,46,49,50,44,43,39,35,31,40,43,43,33,37,52,50,45,48,45,43,42,49,46,41,45,44,41,37,39,40,37,34,39,46,43,40,50,49,50,47,46,38,49,46,44,44,46,34,42,43,40,41,49,34,36,39,40,43,41,43,48,46,40,42,52,46,46,48,51,48,49,43,48,46,39,34,30,44,41,41,55,53,51,52,49,51,45,43,48,57,53,48,50,45,46,46,39,33,33,38,40,37,52,48,54,55,52,58,52,48,56,50,46,44,43,38,39,40,44,36,35,35,30,35,51,51,48,49,49,45,49,50,47,51,49,46,41,38,45,48,47,34,44,38,31,30,51,50,46,56,58,52,46,52,51,46,48,47,49,43,46,37,46,45,40,39,37,37,52,48,45,48,61,50,56,42,44,47,47,51,51,46,39,40,43,52,52,47,42,45,51,49,45,46,57,50,55,43,45,48,47,51,52,49,38,40,42,50,52,46,42,44],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))))])
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
