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

print('*** ProtoTagDtdDeclarationExamples.x3d is an experimental X3D model and not intended to run. Exiting.')
import sys
sys.exit()
###############################################

#  needed: add containerField, class attributes 
#  Instruction steps 1 through 4 are listed in detail within the DOCTYPE declaration internal subset. 
#  You must view full source of the DTD declarations (ProtoTagDtdDeclarationExamples.x3d.txt) to fully understand this file. 
#  ********************************************************************* 
#  ** Step 1: Copy the following DOCTYPE statement in your X3D scene. ** 
#  ** Ensure you include the square backet [ on line 32! ** 
#  ** Modify INCLUDE/IGNORE to match profiles of interest. ** 
#  ********************************************************************* 
newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ProtoTagDtdDeclarationExamples.x3d',name='title'),
    meta(content='17 April 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='brutzman@nps.navy.mil',name='e-mail'),
    meta(content='Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d',name='description'),
    meta(content='You must view full source of the DTD declarations (ProtoTagDtdDeclarationExamples.x3d.txt) to fully understand validation techniques in this file.',name='warning'),
    meta(content='internal subset deficiency: nodeType attributes need to be converted to containerField attributes.',name='error'),
    meta(content='ProtoTagDtdDeclarationExamples.x3d.txt',name='reference'),
    meta(content='SpinGroupInternalSubsetDeclaration.x3d.txt',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ********************************************************************* 
    #  *** Step 5: Copy/edit ProtoDeclare, (optionally ProtoInstance) *** 
    #  *** and the tagset version for your nodes of interest. *** 
    #  *** When instantiating field Node/Nodes or field values, *** 
    #  *** use fieldValue tags to override the initial values. *** 
    #  *** The following example content instantiates prototype *** 
    #  *** NewTransformExample using tags and ProtoInstance. *** 
    #  ********************************************************************* 
    #  Declaring the NewTransformExample PROTO: 
    children=[
    ProtoDeclare(name='NewTransformExample',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='scaleOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',name='children',type='MFNode',
          children=[
          WorldInfo(info=["overridden at run time"])])]),
      ProtoBody=ProtoBody(
        #  Transform is first node, which determines node type, and encloses children for instances. 
        children=[
        Transform(DEF='InitialTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize'),
            connect(nodeField='children',protoField='children')]))])),
    #  Instantiating the NewTransformExample PROTO using a ProtoInstance tag: 
    ProtoInstance(name='NewTransformExample',
      fieldValue=[
      fieldValue(name='translation',value=(0,1.5,0)),
      fieldValue(name='children',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.8,0.8))),
          geometry=Text(string=["ProtoTagDtdDeclaration Examples","using a regular ProtoInstance"],
            fontStyle=FontStyle(DEF='FS',justify=["MIDDLE","MIDDLE"],size=0.7)))])]),
    #  Instantiating the NewTransformExample node using a customized tag: 
    NewTransformExample(center=(0,0,0),rotation=(0,0,1,0),scale=(1,1,1),scaleOrientation=(0,0,1,0),translation=(0,-0.5,0),
      fieldValue=[
      fieldValue(name='children',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.8,0.2))),
          geometry=Text(string=["plus header-declared XML tag from","XML document subset declaration"],
            fontStyle=FontStyle(USE='FS')))])]),
    Transform(translation=(0,-2,0),
      children=[
      Anchor(description='Click to view source (ProtoTagDtdDeclarationExamples.x3d.txt)',parameter=["target=_blank"],url=["ProtoTagDtdDeclarationExamples.x3d.txt","https://www.web3d.org/x3d/content/examples/development/ProtoTagDtdDeclarationExamples.x3d.txt"],
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.4,0.1))),
          geometry=Text(string=["(click to see source)"],
            fontStyle=FontStyle(USE='FS')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProtoTagDtdDeclarationExamples.py")
