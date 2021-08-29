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
        texture=ImageTexture(url=['../../images/4/Malacca13-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.661298515593056,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,1,0,1,1,0,1,1,20,4,18,7,19,25,27,155,468,723,1066,784,384,50,1,1,0,0,0,0,0,0,5,3,21,6,14,18,29,253,422,893,1174,755,338,431,0,1,1,0,0,0,0,-1,-1,6,8,22,14,22,100,490,679,1120,948,771,520,389,0,0,0,1,0,0,0,11,8,19,6,11,8,12,40,518,567,1103,1161,755,361,402,1,0,1,1,1,0,1,20,9,18,17,4,8,13,96,344,601,1038,1053,634,551,461,1,0,0,0,2,0,0,16,7,17,20,22,6,14,36,401,778,726,788,713,671,641,0,1,0,2,0,1,-3,11,14,16,19,15,5,28,165,161,469,612,617,513,731,798,0,1,0,0,1,0,0,13,14,7,21,5,13,43,27,72,108,415,276,321,608,390,0,1,1,1,0,0,4,1,5,8,3,11,10,20,40,33,91,460,208,137,341,151,0,1,0,2,0,0,0,3,18,18,13,6,7,22,16,27,158,299,244,157,70,69,0,2,0,1,1,1,0,11,3,4,6,8,14,18,98,43,90,358,288,111,75,91,0,1,1,1,0,0,14,14,20,11,13,7,11,22,23,40,535,453,764,175,89,96,0,0,1,1,3,2,12,14,16,20,15,5,6,11,18,68,307,681,719,410,81,186,2,3,0,2,3,12,9,18,24,23,2,8,15,12,21,42,292,684,767,579,115,120,4,1,0,0,3,10,21,10,17,17,5,13,12,16,20,41,233,789,955,762,324,717,0,0,0,2,0,3,4,8,12,16,5,10,7,13,27,36,399,1025,1401,710,603,492,1,2,9,8,0,16,11,9,10,7,12,10,10,11,69,81,641,1017,691,931,754,578,0,-2,9,16,20,18,19,14,3,10,9,9,11,12,20,149,559,571,708,536,714,449,1,3,10,2,11,16,9,2,3,5,7,11,11,15,17,319,509,278,495,163,726,838,10,-3,19,18,3,11,12,20,5,3,5,16,8,8,24,361,400,67,55,190,596,885,1,15,18,9,7,20,4,8,4,4,14,9,26,8,16,347,39,45,48,294,731,728,2,1,7,7,2,2,9,7,4,2,95,21,21,24,26,44,137,40,40,172,685,1102,1,1,8,6,3,3,10,7,6,3,90,21,18,25,32,44,140,38,38,193,695,1119],
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
