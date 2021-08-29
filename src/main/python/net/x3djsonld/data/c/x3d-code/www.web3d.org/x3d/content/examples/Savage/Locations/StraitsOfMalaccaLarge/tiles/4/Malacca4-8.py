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
        texture=ImageTexture(url=['../../images/4/Malacca4-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[4,3,2,2,4,1,2,2,5,4,1,2,2,3,1,0,1,2,2,3,2,3,3,3,3,3,3,3,4,5,2,3,5,3,3,3,2,1,1,1,2,3,4,4,4,3,2,3,2,4,4,2,3,2,2,3,2,4,2,0,2,0,3,3,3,5,2,2,3,4,5,3,3,2,3,2,2,1,2,2,2,2,3,3,3,3,2,2,4,4,3,3,2,3,3,3,1,3,3,3,3,2,4,2,2,5,4,4,4,3,3,3,3,3,4,3,3,3,4,4,2,3,3,4,2,1,5,4,4,5,5,7,2,3,4,3,3,3,4,2,2,2,2,1,3,3,2,6,4,4,7,7,38,35,2,3,3,2,4,4,2,1,2,2,3,2,4,2,4,4,4,5,33,34,49,44,3,1,2,4,2,1,2,3,3,3,3,4,2,4,4,5,7,43,65,18,71,33,1,3,2,0,1,2,3,2,3,3,4,5,2,4,2,12,55,68,43,54,70,45,2,0,0,1,3,3,3,3,3,4,4,4,2,4,4,44,70,69,34,86,120,68,0,0,3,2,2,2,3,4,3,3,3,2,2,2,18,75,105,84,141,71,117,130,1,3,3,1,2,4,3,3,2,2,2,3,3,7,65,105,146,142,182,147,176,183,3,1,3,4,3,3,2,2,2,3,4,3,0,41,96,76,98,121,241,355,226,270,0,3,4,3,3,2,3,3,4,4,3,3,19,50,88,150,182,208,246,208,385,336,4,3,3,2,2,3,3,4,4,4,3,10,43,63,114,157,172,246,329,336,223,346,4,3,2,2,3,3,4,3,3,4,4,20,66,98,179,182,118,149,330,471,347,484,3,3,4,3,3,3,3,3,3,5,20,43,95,102,162,133,238,536,539,724,811,687,3,3,3,3,3,4,4,5,5,3,22,66,110,318,128,229,271,761,941,988,967,998,4,3,3,4,3,4,4,4,4,6,37,47,213,352,368,386,457,640,1008,1429,1817,1651,3,3,3,4,4,4,5,4,27,53,56,126,295,197,397,574,633,875,1027,1751,1798,1668,3,3,3,2,4,4,5,3,27,53,58,145,289,224,383,583,611,907,1063,1846,1729,1618],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
