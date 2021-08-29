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
        texture=ImageTexture(url=['../../images/4/Malacca1-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-6.704456788552255,105.95125062410463,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[40,91,203,294,362,530,621,776,653,901,1603,1599,1166,1093,890,939,1753,865,442,674,1003,1047,76,53,174,247,416,415,371,619,530,571,1179,912,803,639,491,563,635,472,436,506,717,809,35,47,79,250,215,239,304,251,600,755,458,751,457,668,343,314,276,258,280,384,767,822,20,68,138,248,178,202,84,196,217,210,272,882,313,260,285,195,182,190,183,243,244,261,53,69,82,108,56,99,151,209,113,171,145,126,415,523,373,126,161,151,151,130,293,262,20,51,89,63,47,79,31,67,55,102,100,90,173,255,210,100,120,117,120,108,95,118,75,102,118,122,75,33,39,59,81,100,64,66,60,73,73,69,93,88,87,97,87,85,168,661,197,140,116,72,23,47,45,46,35,59,43,55,53,63,68,69,74,66,69,64,579,421,495,405,207,105,56,22,38,32,38,34,42,47,43,39,49,40,45,39,38,41,550,556,801,721,210,106,48,16,25,21,26,27,33,29,31,21,25,27,20,20,24,17,102,107,178,216,109,70,39,11,17,15,22,12,24,20,18,15,14,18,11,16,8,12,288,126,96,252,90,43,28,19,16,13,16,8,16,13,13,9,3,6,8,5,4,4,248,200,208,124,42,19,9,6,9,8,9,5,8,5,10,4,3,2,1,0,3,2,5,93,61,23,8,6,3,3,4,3,5,0,5,2,2,1,1,1,1,2,0,0,4,2,17,4,4,4,3,1,2,2,1,1,0,1,2,1,1,1,2,1,1,2,2,9,152,21,2,4,2,2,2,1,1,2,1,2,2,2,2,2,0,1,0,2,3,3,177,70,0,1,1,1,2,2,2,2,2,2,2,3,2,2,1,1,2,0,6,4,2,1,0,0,1,1,1,2,2,2,1,3,3,2,3,3,0,1,2,1,2,-1,0,1,1,0,1,4,0,1,2,2,3,1,2,2,1,1,1,0,0,2,7,9,7,0,0,1,1,2,3,3,2,2,2,3,2,2,3,1,2,2,1,0,1,0,-1,0,1,2,1,2,1,2,3,3,2,3,2,3,2,2,4,3,0,1,0,3,2,0,1,2,1,2,2,2,3,3,2,3,2,3,2,2,4,4,1,1],
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
