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
        texture=ImageTexture(url=['../../images/4/Malacca14-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[395,452,247,223,184,175,349,412,531,504,334,142,135,98,117,115,89,94,135,117,191,157,413,392,339,186,159,175,398,407,626,759,549,182,123,111,116,114,139,126,132,136,198,157,365,544,423,192,195,195,255,536,640,808,371,203,107,87,138,137,258,134,119,150,122,139,275,467,478,212,183,306,353,602,775,823,285,136,135,130,176,138,121,116,113,129,107,136,282,346,331,149,190,272,404,376,568,824,223,156,169,127,204,135,80,84,112,177,108,146,197,181,350,133,162,254,385,555,367,610,182,189,140,181,115,140,93,73,122,84,93,129,331,320,330,166,198,340,381,362,378,291,346,138,545,258,137,116,127,102,93,111,174,138,471,330,288,174,255,520,216,327,254,241,281,163,456,274,107,178,131,130,86,142,130,99,370,470,349,261,257,303,461,451,320,134,91,89,142,359,140,217,105,107,89,134,107,107,454,456,281,182,172,287,184,138,109,111,159,278,165,175,80,209,157,112,68,74,79,101,377,285,209,295,280,184,113,99,130,169,223,506,644,132,157,126,115,145,147,77,82,95,378,292,157,467,264,309,218,140,189,185,317,930,789,301,91,76,97,169,103,105,86,103,242,330,173,641,269,296,261,185,259,384,423,795,576,453,97,101,86,126,96,90,66,87,487,394,143,341,401,288,241,227,314,377,659,469,392,165,210,152,101,64,73,54,80,101,449,279,188,340,516,183,325,226,165,300,365,233,245,101,224,125,143,127,119,73,102,83,643,406,216,442,391,293,378,295,243,318,439,160,154,386,545,212,99,109,208,97,82,95,1024,315,337,412,432,313,312,419,277,379,435,179,264,774,829,271,136,215,167,52,64,112,935,373,237,220,344,340,342,357,520,503,732,390,596,1029,665,259,104,183,136,54,64,92,516,564,225,169,306,339,392,634,877,690,1300,649,383,882,638,217,190,204,128,73,102,238,790,749,297,193,301,603,621,1172,1239,1225,1156,776,230,301,495,110,95,130,83,95,149,154,748,570,310,296,526,1013,888,1035,1512,1284,1040,696,440,99,219,114,78,54,151,194,121,117,530,332,317,657,779,1133,1000,1407,1301,1606,1285,736,779,181,48,219,82,119,192,88,148,167,494,325,349,643,789,1152,1033,1473,1293,1582,1287,790,764,189,48,214,83,132,200,95,153,137],
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
