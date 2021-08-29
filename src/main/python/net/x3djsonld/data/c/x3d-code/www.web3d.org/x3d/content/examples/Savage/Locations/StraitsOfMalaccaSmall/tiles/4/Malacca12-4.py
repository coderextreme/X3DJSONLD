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
        texture=ImageTexture(url=['../../images/4/Malacca12-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,0,0,0,-6,4,4,35,18,32,10,8,8,12,17,16,22,26,22,18,21,12,-2,-1,0,0,1,1,3,115,27,6,12,1,9,22,21,18,19,23,25,14,18,14,-1,0,0,-1,0,-1,10,13,47,20,6,0,3,10,17,16,16,24,23,18,14,25,-1,0,0,0,0,4,5,4,62,5,10,3,9,12,12,20,25,21,21,19,17,17,0,-2,0,-1,1,2,0,146,169,15,5,11,8,10,17,21,20,25,17,18,19,15,0,0,1,0,0,3,6,91,214,16,6,108,12,12,17,19,14,21,19,39,17,21,-1,2,0,0,0,1,0,44,205,11,13,11,10,17,18,20,18,21,50,70,19,17,1,0,-1,0,0,2,0,0,31,9,14,16,9,18,18,18,13,17,24,53,48,18,0,0,0,3,2,2,1,0,9,7,11,8,15,16,14,14,13,20,33,73,27,29,1,1,1,0,0,0,0,3,0,7,8,13,16,18,13,13,15,30,58,40,42,31,1,2,2,0,1,2,1,1,-2,9,10,10,13,14,11,13,15,77,39,138,65,26,0,1,2,2,2,3,0,1,2,3,5,8,8,9,12,13,19,18,36,49,45,32,0,1,1,2,2,0,0,0,-3,3,12,10,13,10,16,60,19,23,35,48,183,92,0,2,0,3,2,0,0,4,3,4,12,7,10,11,218,47,34,77,52,40,62,41,0,2,0,1,3,4,2,3,0,15,5,6,8,39,156,94,66,320,122,135,51,47,0,0,1,0,2,1,2,3,3,1,19,6,10,56,59,180,293,481,490,321,171,53,2,0,1,1,0,2,0,0,14,-1,10,9,8,14,26,160,488,436,703,451,281,51,2,0,2,2,2,1,1,9,15,20,15,8,13,31,56,159,610,618,910,851,296,49,2,2,1,0,2,0,0,15,6,8,13,17,30,361,97,303,643,775,714,613,344,109,0,0,1,0,0,2,2,9,3,18,20,22,14,130,20,66,338,800,619,507,160,43,1,0,0,1,1,0,1,12,11,8,12,6,13,23,31,292,436,706,902,742,184,43,0,1,0,0,1,0,0,0,18,5,15,5,17,22,31,112,507,725,1033,742,394,53,0,1,0,1,1,0,1,1,20,4,18,7,19,25,27,155,468,723,1066,784,384,50],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
