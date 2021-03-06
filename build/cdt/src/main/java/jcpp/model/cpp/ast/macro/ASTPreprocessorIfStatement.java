package jcpp.model.cpp.ast.macro;

import jcpp.model.cpp.ast.*;
import org.eclipse.cdt.core.dom.ast.*;
import javax.xml.bind.annotation.*;

@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class ASTPreprocessorIfStatement extends ASTPreprocessorStatement{
	@XmlElement
	private String condition;
	@XmlElement
	private boolean bTaken;

	public ASTPreprocessorIfStatement(IASTPreprocessorIfStatement p) throws Exception{
		super(p);
		condition=new String(p.getCondition());
		bTaken=p.taken();
	}

	public ASTPreprocessorIfStatement(){
	}

	public String getCondition(){
		return condition;
	}

	public void setCondition(String c){
		condition=c;
	}

	public boolean isTaken(){
		return bTaken;
	}

	public void setTaken(boolean b){
		bTaken=b;
	}
}