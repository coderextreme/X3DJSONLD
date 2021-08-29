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
    component(level=1,name='Geospatial'),
    meta(content='dardanel1-3.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel1-3.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel1-3.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.79722229877732,26.983082655714444,0.0),geoSystem=["GD"],height=[1004,884,755,483,553,442,328,330,282,293,260,285,294,210,299,257,286,441,694,582,510,533,962,936,699,466,371,368,288,268,257,253,216,200,198,254,284,230,311,283,369,516,643,590,641,798,827,532,415,343,305,255,239,224,217,214,205,327,177,272,296,300,346,369,460,389,492,413,593,748,528,611,531,349,347,302,300,242,235,234,258,176,216,180,223,398,402,412,311,369,485,736,790,935,808,718,590,635,410,442,401,420,287,189,160,161,174,284,275,289,509,235,368,544,558,648,702,738,742,585,662,701,682,554,446,299,226,175,184,273,363,370,464,419,445,602,628,599,616,558,390,538,705,859,789,529,340,305,238,206,227,447,503,529,315,266,516,644,725,787,615,583,528,440,349,328,318,312,454,410,290,247,202,311,428,463,279,323,423,390,511,615,595,443,356,422,354,267,242,227,216,255,358,253,333,402,527,574,251,149,192,252,241,501,284,431,350,331,353,320,363,362,284,232,191,246,401,179,250,333,200,189,106,135,232,250,265,424,364,335,280,278,399,671,523,512,314,237,339,306,234,328,84,110,111,116,136,152,220,320,600,394,300,269,284,380,750,537,324,295,469,359,253,174,125,144,125,168,248,208,261,286,578,516,559,283,302,353,496,433,382,309,651,760,444,425,212,234,-12,80,122,121,167,395,537,393,542,348,264,254,290,501,490,404,617,688,770,595,203,196,178,259,199,65,72,203,349,513,359,370,352,371,394,588,418,357,418,584,825,791,364,199,285,183,206,261,253,60,185,254,357,430,250,258,350,608,542,443,533,666,775,825,297,284,376,345,344,304,215,78,129,247,346,240,357,192,289,607,814,635,572,654,583,490,293,318,304,335,274,226,236,146,64,224,320,295,460,287,214,407,694,593,511,558,488,488,237,305,277,268,355,284,278,315,234,87,95,226,500,519,371,231,352,756,608,612,449,463,277,316,191,204,141,153,300,394,362,150,139,281,365,497,519,424,142,357,612,626,429,406,122,179,243,138,131,105,135,237,203,39,188,341,345,297,314,312,394,220,380,348,329,355,114,185,242,137,137,106,139,230,196,38,182,344,338,305,306,318,403,226,385,332,321,355],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel1-3.py")
