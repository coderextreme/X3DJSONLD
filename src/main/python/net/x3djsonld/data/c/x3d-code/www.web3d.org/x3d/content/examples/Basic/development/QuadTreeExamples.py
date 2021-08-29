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

print('*** QuadTreeExamples.x3d is an experimental X3D model and not intended to run. Exiting.')
import sys
sys.exit()
###############################################

#  ENTITY, ELEMENT and ATTLIST definitions are listed in detail within the DOCTYPE declaration internal subset. 
#  You must view full source of the DTD declarations (QuadTreeExamples.x3d.txt) to fully understand this file. 
newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='QuadTreeExamples.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations.',name='description'),
    meta(content='Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render.',name='error'),
    meta(content='You must view full source of the DTD declarations (QuadTreeExamples.x3d.txt) to fully understand validation techniques in this file.',name='warning'),
    meta(content='QuadTreeExamplesExplanation.html',name='reference'),
    meta(content='QuadTreeExamples.x3d.txt',name='reference'),
    meta(content='QuadTreeExamples.png',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    #  Example solution approach #1 
    #  Note that PROTO declarations are also provided for compatible backwards translation to VRML 97 encoding. They are not necessary for independent X3D use of the QuadTree examples. 
    children=[
    ProtoDeclare(name='QuadTree-USEchildren',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='upperLeftDEFName',type='MFNode'),
        field(accessType='inputOutput',name='upperRightDEFName',type='MFNode'),
        field(accessType='inputOutput',name='lowerLeftDEFName',type='MFNode'),
        field(accessType='inputOutput',name='lowerRightDEFName',type='MFNode'),
        field(accessType='inputOutput',name='children',type='MFNode')]
        #  children field must be declared for any PROTOs or native-tag nodes with children 
        ),
      ProtoBody=ProtoBody(
        #  VRML 97 specification paragraph 4.8.3, PROTO definition semantics: "A prototype definition consists of one or more nodes." PROTO body follows. 
        children=[
        Group(
          children=[
          Group(DEF='GroupA',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='upperLeftDEFName')])),
          Group(DEF='GroupB',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='upperRightDEFName')])),
          Group(DEF='GroupC',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='lowerLeftDEFName')])),
          Group(DEF='GroupD',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='lowerRightDEFName')]))])])),
    #  Example solution approach #3 
    ProtoDeclare(name='QuadTree-TagChildren',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='upperLeftNode',type='MFNode',
          #  no initialization node 
          ),
        field(accessType='inputOutput',name='upperRightNode',type='MFNode',
          #  no initialization node 
          ),
        field(accessType='inputOutput',name='lowerLeftNode',type='MFNode',
          #  no initialization node 
          ),
        field(accessType='inputOutput',name='lowerRightNode',type='MFNode',
          #  no initialization node 
          ),
        field(accessType='inputOutput',name='children',type='MFNode')]),
      ProtoBody=ProtoBody(
        #  PROTO body follows. 
        children=[
        Group(
          children=[
          Group(DEF='GroupE',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='upperLeftNode')])),
          Group(DEF='GroupF',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='upperRightNode')])),
          Group(DEF='GroupG',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='lowerLeftNode')])),
          Group(DEF='GroupH',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='lowerRightNode')]))])])),
    #  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Group(
      children=[
      Viewpoint(description='View QuadTree examples',position=(0,0,30)),
      Transform(DEF='Example_1',translation=(0,6,0),
        children=[
        ProtoInstance(name='QuadTree-USEchildren',
          fieldValue=[
          fieldValue(name='children',
            children=[
            Group(
              children=[
              Transform(DEF='UPPER_LEFT',translation=(4,0,4),
                children=[
                Shape(
                  appearance=Appearance(DEF='RED',
                    material=Material(diffuseColor=(1,0,0))),
                  geometry=Box(),)]),
              Transform(DEF='UPPER_RIGHT',translation=(3,0,-3),
                children=[
                Shape(
                  appearance=Appearance(DEF='GREEN',
                    material=Material(diffuseColor=(0,1,0))),
                  geometry=Sphere(),)]),
              Transform(DEF='LOWER_LEFT',translation=(-3,0,-3),
                children=[
                Shape(
                  appearance=Appearance(DEF='BLUE',
                    material=Material(diffuseColor=(.2,.2,1))),
                  geometry=Cylinder(),)]),
              Transform(DEF='LOWER_RIGHT',translation=(-6,0,4),
                children=[
                Shape(
                  appearance=Appearance(DEF='WHITE',
                    material=Material(diffuseColor=(1,1,1))),
                  geometry=Text(string=["QuadTree-USEchildren","ProtoInstance"]))])])]),
          fieldValue(name='upperLeftDEFName',
            children=[
            Transform(USE='UPPER_LEFT')]),
          fieldValue(name='upperRightDEFName',
            children=[
            Transform(USE='UPPER_RIGHT')]),
          fieldValue(name='lowerLeftDEFName',
            children=[
            Transform(USE='LOWER_LEFT')]),
          fieldValue(name='lowerRightDEFName',
            children=[
            Transform(USE='LOWER_RIGHT')])])]),
      Transform(DEF='Example_2',translation=(0,2,0),
        children=[
        QuadTree-USEchildren(nodeType=Group,
          fieldValue=[
          fieldValue(name='children',
            #  children which follow are locally convenient and referenced via IDREF/USE 
            children=[
            Transform(DEF='LOWER_RIGHT_EXAMPLE_2',translation=(-6,0,4),
              children=[
              Shape(
                geometry=Text(string=["QuadTree-USEchildren","Native tags"]),
                appearance=Appearance(USE='WHITE'))])]),
          fieldValue(name='upperLeftDEFName',
            children=[
            Transform(USE='UPPER_LEFT')]),
          fieldValue(name='upperRightDEFName',
            children=[
            Transform(USE='UPPER_RIGHT')]),
          fieldValue(name='lowerLeftDEFName',
            children=[
            Transform(USE='LOWER_LEFT')]),
          fieldValue(name='lowerRightDEFName',
            children=[
            Transform(USE='LOWER_RIGHT_EXAMPLE_2')])])]),
      Transform(DEF='Example_3',translation=(0,-2,0),
        children=[
        ProtoInstance(name='QuadTree-TagChildren',
          fieldValue=[
          fieldValue(name='upperLeftNode',
            children=[
            Transform(USE='UPPER_LEFT')]),
          fieldValue(name='upperRightNode',
            children=[
            Transform(USE='UPPER_RIGHT')]),
          fieldValue(name='lowerLeftNode',
            children=[
            Transform(USE='LOWER_LEFT')]),
          fieldValue(name='lowerRightNode',
            children=[
            Transform(translation=(-6,0,4),
              children=[
              Shape(
                geometry=Text(string=["QuadTree-TagChildren","ProtoInstance"]),
                appearance=Appearance(USE='WHITE'))])])])]),
      Transform(DEF='Example_4',translation=(0,-6,0),
        children=[
        QuadTree-TagChildren(nodeType=Group,
          fieldValue=[
          fieldValue(name='upperLeftNode',
            children=[
            Transform(USE='UPPER_LEFT')]),
          fieldValue(name='upperRightNode',
            children=[
            Transform(USE='UPPER_RIGHT')]),
          fieldValue(name='lowerLeftNode',
            children=[
            Transform(USE='LOWER_LEFT')]),
          fieldValue(name='lowerRightNode',
            children=[
            Transform(translation=(-6,0,4),
              children=[
              Shape(
                geometry=Text(string=["QuadTree-TagChildren","Native tags"]),
                appearance=Appearance(USE='WHITE'))]),
            WorldInfo(info=["this WorldInfo is here to demonstrate that the example is type MFNode"])])])])])]
    #  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
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

print ("python x3d.py load successful for QuadTreeExamples.py")
