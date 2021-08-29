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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='WeaponsCoveragePrototype.x3d',name='title'),
    meta(content='WeaponsCoveragePrototype',name='description'),
    meta(content='LT Patrick Sullivan',name='creator'),
    meta(content='3 August 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/Symbology/WeaponsCoveragePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='WeaponsCoverage',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Turns zones on and off',name='whichChoice',type='SFInt32',value=-1)]),
      ProtoBody=ProtoBody(
        children=[
        Switch(whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichChoice')]),
          children=[
          Transform(DEF='WeaponsCoverage',scale=(10,10,20),translation=(31.767,1.071,0),
            children=[
            Shape(DEF='CoverageGeometry',
              appearance=Appearance(
                material=Material(DEF='LightBlue',diffuseColor=(0,1,1),transparency=0.5)),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,4,5,-1,0,5,1,-1,0,3,6,-1,0,6,4,-1,7,1,5,-1,7,5,8,-1,7,8,9,-1,7,9,10,-1,7,10,2,-1,7,2,1,-1,11,8,5,-1,11,5,12,-1,11,12,13,-1,11,13,14,-1,11,14,9,-1,11,9,8,-1,15,12,5,-1,15,5,16,-1,15,16,17,-1,15,17,18,-1,15,18,13,-1,15,13,12,-1,19,16,5,-1,19,5,20,-1,19,20,21,-1,19,21,22,-1,19,22,17,-1,19,17,16,-1,23,20,5,-1,23,5,24,-1,23,25,21,-1,23,21,20,-1,23,26,27,-1,23,27,25,-1,23,24,28,-1,23,28,26,-1,29,26,28,-1,29,28,30,-1,29,30,31,-1,29,31,32,-1,29,32,27,-1,29,27,26,-1,33,34,35,-1,33,35,36,-1,33,36,31,-1,33,31,30,-1,33,30,28,-1,33,28,24,-1,33,24,5,-1,33,5,34,-1,37,34,5,-1,37,5,38,-1,37,38,39,-1,37,39,40,-1,37,40,35,-1,37,35,34,-1,41,38,5,-1,41,5,42,-1,41,42,43,-1,41,43,44,-1,41,44,39,-1,41,39,38,-1,45,42,5,-1,45,5,46,-1,45,46,47,-1,45,47,48,-1,45,48,43,-1,45,43,42,-1,49,4,6,-1,49,6,50,-1,49,46,5,-1,49,5,4,-1,49,50,47,-1,49,47,46,-1,51,3,2,-1,51,2,52,-1,51,52,53,-1,51,53,54,-1,51,54,6,-1,51,6,3,-1,55,10,9,-1,55,9,56,-1,55,52,2,-1,55,2,10,-1,55,56,53,-1,55,53,52,-1,57,14,13,-1,57,13,58,-1,57,56,9,-1,57,9,14,-1,57,58,53,-1,57,53,56,-1,59,18,17,-1,59,17,60,-1,59,58,13,-1,59,13,18,-1,59,60,53,-1,59,53,58,-1,61,22,21,-1,61,21,62,-1,61,60,17,-1,61,17,22,-1,61,62,53,-1,61,53,60,-1,63,25,27,-1,63,27,64,-1,63,62,21,-1,63,21,25,-1,63,64,65,-1,63,65,66,-1,63,66,53,-1,63,53,62,-1,67,68,65,-1,67,65,64,-1,67,64,27,-1,67,27,32,-1,67,32,31,-1,67,31,68,-1,69,36,35,-1,69,35,70,-1,69,70,53,-1,69,53,66,-1,69,68,31,-1,69,31,36,-1,69,66,65,-1,69,65,68,-1,71,40,39,-1,71,39,72,-1,71,70,35,-1,71,35,40,-1,71,72,53,-1,71,53,70,-1,73,44,43,-1,73,43,74,-1,73,72,39,-1,73,39,44,-1,73,74,53,-1,73,53,72,-1,75,48,47,-1,75,47,76,-1,75,74,43,-1,75,43,48,-1,75,76,53,-1,75,53,74,-1,77,50,6,-1,77,6,54,-1,77,54,53,-1,77,53,76,-1,77,76,47,-1,77,47,50,-1],creaseAngle=0.524,
                coord=Coordinate(point=[(2.28,.05,-0),(2.23,.05,.52),(2.23,0,.52),(2.28,0,-0),(2.23,.05,-.52),(.66,.05,-0),(2.23,0,-.52),(2.08,.05,1.03),(1.83,.05,1.49),(1.83,0,1.49),(2.08,0,1.03),(1.49,.05,1.9),(1.09,.05,2.24),(1.09,0,2.24),(1.49,0,1.9),(.62,.05,2.49),(.12,.05,2.64),(.12,0,2.64),(.62,0,2.49),(-.41,.05,2.69),(-.93,.05,2.64),(-.93,0,2.64),(-.41,0,2.69),(-1.54,.05,2.24),(-1.07,.05,0),(-1.54,0,2.24),(-2.3,.05,1.27),(-2.3,0,1.27),(-2.02,.05,0),(-3.15,.05,0),(-2.3,.05,-1.27),(-2.3,0,-1.27),(-3.15,0,0),(-1.54,.05,-2.24),(-.93,.05,-2.64),(-.93,0,-2.64),(-1.54,0,-2.24),(-.41,.05,-2.69),(.12,.05,-2.64),(.12,0,-2.64),(-.41,0,-2.69),(.62,.05,-2.49),(1.09,.05,-2.24),(1.09,0,-2.24),(.62,0,-2.49),(1.49,.05,-1.9),(1.83,.05,-1.49),(1.83,0,-1.49),(1.49,0,-1.9),(2.08,.05,-1.03),(2.08,0,-1.03),(2.28,-.05,-0),(2.23,-.05,.52),(.66,-.05,-0),(2.23,-.05,-.52),(2.08,-.05,1.03),(1.83,-.05,1.49),(1.49,-.05,1.9),(1.09,-.05,2.24),(.62,-.05,2.49),(.12,-.05,2.64),(-.41,-.05,2.69),(-.93,-.05,2.64),(-1.54,-.05,2.24),(-2.3,-.05,1.27),(-2.02,-.05,0),(-1.07,-.05,0),(-3.15,-.05,0),(-2.3,-.05,-1.27),(-1.54,-.05,-2.24),(-.93,-.05,-2.64),(-.41,-.05,-2.69),(.12,-.05,-2.64),(.62,-.05,-2.49),(1.09,-.05,-2.24),(1.49,-.05,-1.9),(1.83,-.05,-1.49),(2.08,-.05,-1.03)])))])])]))]
    #  TODO add Anchor link 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WeaponsCoveragePrototype.py")
